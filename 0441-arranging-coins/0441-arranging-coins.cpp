class Solution {
public:
    int arrangeCoins(int n) {
        long left = 1, right = n;
        while (left <= right) {
            long mid = left + (right - left) / 2;
            long coin_need = mid * (mid + 1) / 2;
            if (coin_need == n)
                return mid;
            else if (coin_need < n)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return right;
    }
};