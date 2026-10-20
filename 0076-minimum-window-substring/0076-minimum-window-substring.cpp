class Solution {
public:
    bool fun(vector<int>& have, vector<int>& need) {
        for (int i = 0; i < 256; i++) {
            if (have[i] < need[i]) {
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        int low = 0, res = INT_MAX, start = 0;
        int m = s.size(), n = t.size();
        vector<int> have(256, 0);
        vector<int> need(256, 0);
        for(char ch : t){
            need[ch]++;
        }
        for (int high = 0; high < m; high++) {
            have[s[high]]++;
            while (fun(have, need)) {
                int len = high - low + 1;
                if (res > len) {
                    res = len;
                    start = low;
                }
                have[s[low]]--;
                low++;
            }
        }
        return (res == INT_MAX) ? "" : s.substr(start, res);
    }
};