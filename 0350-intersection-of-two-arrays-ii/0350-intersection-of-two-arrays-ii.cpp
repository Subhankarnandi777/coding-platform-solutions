class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;

        for(int val : nums1){
            map[val]++;
        }
        vector<int> result;

        for(int val : nums2){
            if(map[val] > 0){
                result.push_back(val);
                map[val]--;
            }
        }
        return result;
    }
};