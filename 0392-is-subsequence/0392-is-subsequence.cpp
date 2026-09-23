class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size() , m = t.size();
        int sp = 0 , tp = 0;

        while (sp < n && tp < m){
            if(s[sp] == t[tp]){
                sp++;
            }
            tp++;
        }
        return sp == n;

    }
};