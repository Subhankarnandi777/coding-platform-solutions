class Solution {
public:
    string build_str (string str){
        string res;
        for(char ch : str){
            if(ch == '#'){
                if(!res.empty()){
                    res.pop_back();
                }
            } else {
                res.push_back(ch);
            }
        }
        return res;
    }
    bool backspaceCompare(string s, string t) {
        return build_str(s) == build_str(t);
    }
};