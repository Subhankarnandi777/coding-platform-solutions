class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        string results = "";
        int n = s.size();
        int jumps = (numRows - 1) * 2;
        for(int i = 0 ; i < numRows ; i++){
            for(int j = i ; j < n ; j += jumps){
                results += s[j];
                if ( i > 0 && i < numRows - 1 && (j + jumps - 2*i) < n){
                    results += s[j+jumps - 2*i];
                }
            }
        }
        return results;
    }
};