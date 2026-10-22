class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m = s.size(), n = p.size();
        int low = 0;

        vector<int> pcount(26, 0);
        vector<int> scount(26, 0);
        vector<int> v;

        for (int i = 0; i < n; i++) {
            pcount[p[i] - 'a']++;
        }

        for (int high = 0; high < m; high++) {
            scount[s[high] - 'a']++;
            if (high - low + 1 > n) {
                scount[s[low] - 'a']--;
                low++;
            }
            if (high - low + 1 == n) {
                if (pcount == scount) {
                    v.push_back(low);
                }
            }
        }
        return v;
    }
};