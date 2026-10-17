class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        vector<int> freq(26, 0);   // only 26 letters
        int low = 0, maxcount = 0, res = 0;

        for (int high = 0; high < n; high++) {
            freq[s[high] - 'A']++;   // count current char
            maxcount = max(maxcount, freq[s[high] - 'A']); 

            // shrink window if replacements exceed k
            while ((high - low + 1) - maxcount > k) {
                freq[s[low] - 'A']--;
                low++;
            }

            res = max(res, high - low + 1);
        }
        return res;
    }
};
