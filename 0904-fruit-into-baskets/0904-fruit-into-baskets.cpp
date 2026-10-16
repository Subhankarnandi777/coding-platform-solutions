class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int low = 0 , res = -1;
        unordered_map <int, int> basket;

         for(int high = 0 ; high < n ; high++){
            basket[fruits[high]]++;
            while(basket.size() > 2){
                basket[fruits[low]]--;
                if(basket[fruits[low]] == 0){
                    basket.erase(fruits[low]);
                }
                low++;
            }
            if(basket.size() == 2 || basket.size() < 2){
                int len = high - low + 1;
                res = max(len , res);
            }
         }
         return res;
    }
};