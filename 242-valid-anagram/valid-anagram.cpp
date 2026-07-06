
        class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length())
            return false;

        unordered_map<char, int> m;
        unordered_map<char, int> n;

        for (int i = 0; i < s.length(); i++) {
            m[s[i]]++;
            n[t[i]]++;
        }

        return m == n;
    }
};
       // vector<int> fs(26, 0);
        //vector<int> ft(26, 0);

        //for (int i = 0; i < s.length(); i++) {
          //  fs[s[i] - 'a']++;
            //ft[t[i] - 'a']++;
        

        //return fs == ft;

