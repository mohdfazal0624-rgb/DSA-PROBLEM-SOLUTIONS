class Solution {
public:
    string toLowerCase(string s) {
        // brute force 
    //  string c="";
    //      for(int i=0;i<s.length();i++){
    //      c+= tolower(s[i]);
    //      }
    //      return c;
      
    //    return c;

    // optimize
     transform(s.begin(),s.end(),s.begin(),::tolower);
     return s;
    }
};