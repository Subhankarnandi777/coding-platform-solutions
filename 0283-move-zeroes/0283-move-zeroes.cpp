class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ip = 0 , n = nums.size();
        for(int i = 0 ; i < n ; i++){
            if(nums[i] != 0){
                nums[ip] = nums[i];
                ip++;
            }
        }
        while (ip < n){
            nums[ip] = 0;
            ip++;
        }
    }
};