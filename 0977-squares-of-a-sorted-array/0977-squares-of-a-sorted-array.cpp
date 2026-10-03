class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int st = 0, end = n - 1;
        int idx = n - 1;

        while (st <= end){
            int leftsq = nums[st] * nums[st];
            int rightsq = nums[end] * nums[end];
             if (leftsq > rightsq){
                res[idx--] = leftsq;
                st++;
            } else {
                res[idx--] = rightsq;
                end--;
            }
        }
        return res;
    }
};