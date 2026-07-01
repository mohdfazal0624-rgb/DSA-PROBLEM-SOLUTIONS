class Solution {
public:
string reverseWords(string a){
 string ans="";
 int n=a.length();
 reverse(a.begin(),a.end());
 for(int i=0;i<n;i++){
    string w="";
    while(i<n&&a[i]!=' '){
        w+=a[i];
        i++;
    }
    reverse(w.begin(),w.end());
    if(w.length()>0)
    ans+=" "+w  ;
 }
 return ans.substr(1);

    }
};