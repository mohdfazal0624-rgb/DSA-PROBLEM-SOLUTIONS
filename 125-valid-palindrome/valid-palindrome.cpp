class Solution {
public:
    bool isPalindrome(string s) {
      string a="";
       for(int i=0;i<s.size();i++){
        if(isalpha(s[i]))
        a+=tolower(s[i]);
        else if (isdigit(s[i]))
        a+=s[i];
        else continue;

       }
       int st=0,end=a.size()-1;
       while(st<=end){
        if(a[st]!=a[end])
        return false;
        else st++;
        end --;
       }
       return true;

    }
};