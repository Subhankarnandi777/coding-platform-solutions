class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int count = 0;
        int prefixsum = 0;
        unordered_map<int,int> m;

        for (int i = 0; i < n; i++) {
            prefixsum += arr[i];

            if (prefixsum == k) count++;

            int val = prefixsum - k;
            if (m.find(val) != m.end()) {
                count += m[val];
            }

            m[prefixsum]++;
        }
        return count;
    }
};
