class Solution { 
public: 
    string truncateSentence(string s, int k) { 
        string a=""; 
        for(int i=0; i<s.length() && k>0; i++){ 
            if(s[i]!=' ') {
                a+=s[i]; 
            } else { 
                k--; 
                if(k > 0) a+=s[i];
            } 
        } 
        return a; 
    } 
};
