class Solution {
public:
    bool isPerfectSquare(int num) {
        long st =  1, end = num;
        while(st <= end){
            long mid = st + (end - st) / 2;
            long square = mid * mid;
            if(square == num) return true;
            else if (square > num) end = mid - 1;
            else st = mid + 1;
        }
        return false;
    }
};