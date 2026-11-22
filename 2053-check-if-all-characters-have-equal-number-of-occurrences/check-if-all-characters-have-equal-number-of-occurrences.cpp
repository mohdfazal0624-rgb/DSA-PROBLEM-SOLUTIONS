class Solution {
public:
    bool areOccurrencesEqual(string s) {
       unordered_map<char,int> map;
       for(int i=0;i<s.length();i++){
        if(!map.contains(s[i])){
            map[s[i]]=1;
        }
        else
        map[s[i]]++;
       } 
       for(int i=1;i<s.length();i++){
        if(map[s[0]]!=map[s[i]])
        return false;
       }
       return true;
    }
};