class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int ans = INT_MAX;
        int low = 0;
        int n = nums.size();
        for(int high = 0; high < n; high++){
            sum += nums[high];
            while(sum >= target){
                int len = high - low + 1;
                ans = min(ans,len);
                sum -= nums[low];
                low++;
            }
        }
        return (ans == INT_MAX) ? 0 : ans;
    }
};