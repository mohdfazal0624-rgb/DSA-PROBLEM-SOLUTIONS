class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        vector<int> fs(26, 0);
        vector<int> ft(26, 0);

        for (int i = 0; i < s.length(); i++) {
            fs[s[i] - 'a']++;
            ft[t[i] - 'a']++;
        }

        return fs == ft;
    }
};
