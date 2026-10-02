class Solution {
public:
int sp(string s){
    int c=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' ')
        c++;
    }
    return c;
}
    int mostWordsFound(vector<string>& sentences) {
        int maxp=0;
        for(int i=0;i<sentences.size();i++){
            maxp=max(maxp,sp(sentences[i]));
        }
        return maxp+1;
    }
};