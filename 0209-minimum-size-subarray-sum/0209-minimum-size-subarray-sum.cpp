class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0, high = 0, res = INT_MAX, sum = 0;
        int n = nums.size();

        for (int high = 0; high < n; high++) {
            sum += nums[high];
            while (sum >= target) {
                int len = high - low + 1;
                res = min(res, len);
                sum -= nums[low];
                low++;
            }
        }
        return (res == INT_MAX) ? 0 : res;
    }
};