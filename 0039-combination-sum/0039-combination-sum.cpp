class Solution {
public:
    void getallcombinations(vector<int>& arr, int idx, int tar,
                            vector<vector<int>>& ans, vector<int>& combin) {
        int n = arr.size();

        if (tar == 0) {
            ans.push_back(combin);
            return;
        }
        if (idx == n || tar < 0) {
            return;
        }

        combin.push_back(arr[idx]);
        getallcombinations(arr, idx, tar - arr[idx], ans, combin); // single
        combin.pop_back();
        getallcombinations(arr, idx + 1, tar, ans,
                           combin); // execution
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combin;

        getallcombinations(candidates, 0, target, ans, combin);

        return ans;
    }
};