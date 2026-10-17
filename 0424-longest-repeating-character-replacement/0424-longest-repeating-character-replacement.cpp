class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        vector<int> freq(26, 0);
        int low = 0, maxcount = 0, res = 0;

        for (int high = 0; high < n; high++) {
            freq[s[high] - 'A']++;
            maxcount = max(maxcount, freq[s[high] - 'A']); 


            while ((high - low + 1) - maxcount > k) {
                freq[s[low] - 'A']--;
                low++;
            }

            res = max(res, high - low + 1);
        }
        return res;
    }
};
