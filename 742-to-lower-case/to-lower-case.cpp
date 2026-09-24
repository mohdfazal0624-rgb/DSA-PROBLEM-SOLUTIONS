class Solution {
public:
    string toLowerCase(string s) {
        string c="";
        for(int i=0;i<s.length();i++){
        c+= tolower(s[i]);
        }
        return c;
    }
};