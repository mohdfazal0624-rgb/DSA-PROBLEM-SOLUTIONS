class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() == 0)
            return 0;

        int l = 1, maxp = 1, i = 0;

        for (int j = 1; j < s.length(); j++) {

            string temp = s.substr(i, j - i);
            int pos = temp.find(s[j]);

            if (pos == string::npos) {   // Character not found
                l++;
                maxp = max(l, maxp);
            }
            else {
                i = i + pos + 1;         // Move i just after duplicate
                l = j - i + 1;           // Recalculate current length
            }
        }

        return maxp;
    }
};