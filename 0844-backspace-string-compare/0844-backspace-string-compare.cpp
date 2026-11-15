class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size();
        int m = t.size();
        int i = n - 1;
        int j = m - 1;

        while (i >= 0 || j >= 0){
            int skips = 0;
            while(i >= 0){
                if(s[i] == '#'){
                    skips++;
                    i--;
                } else if(skips > 0){
                    skips--;
                    i--;
                } else {
                    break;
                }
            }
            int skipt = 0;
            while (j >= 0){
                if(t[j] == '#'){
                    skipt++;
                    j--;
                } else if (skipt > 0){
                    skipt--;
                    j--;
                } else {
                    break;
                }
            }
            if( i >= 0 && j >= 0){
                if(s[i] != t[j]){
                    return false;
                }
            } else if (i >= 0 || j >= 0){
                return false;
            }
            i--;
            j--;
        }
        return true;
    }
};