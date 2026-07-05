class Solution {
public:
    bool isAnagram(string s, string t) {
vector<int> fs(26,0);
vector<int> ft(26,0);
for(int i=0;i<s.length();i++){
     fs[s[i]-'a']++;
}
for(int i=0;i<t.length();i++){
     ft[t[i]-'a']++;}
     for(int i=0;i<26;i++){
        if(fs[i]!=ft[i])
        return false;
     }
  return true;
  

    }
};