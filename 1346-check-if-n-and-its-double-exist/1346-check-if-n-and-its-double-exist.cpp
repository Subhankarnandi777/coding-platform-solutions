class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int , int> seen;
        for (int i = 0 ; i < n ; i++){
            if((seen[arr[i]*2] == 1) || (arr[i]%2 == 0 && seen[arr[i] / 2] == 1)) 
                return true;
            seen[arr[i]]++;
        }
        return false;
    }
};