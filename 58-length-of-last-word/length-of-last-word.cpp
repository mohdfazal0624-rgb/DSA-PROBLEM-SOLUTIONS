class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> ans;
        string word;
        for(int i=0;i<s.length();i++){
            word="";
            while(i<s.length()&&s[i]!=' '){
                word+=s[i];
                i++;
            }
            if(!word.empty())
            ans.push_back(word);
        }
        return ans[ans.size()-1].length();
    }
};