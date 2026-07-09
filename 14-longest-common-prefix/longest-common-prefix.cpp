class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.empty())
            return "";

        if (strs.size() == 1)
            return strs[0];

        string a = "";

        int mip = strs[0].length();

        for (int i = 1; i < strs.size(); i++) {
            mip = min(mip, (int)strs[i].length());
        }

        for (int i = 0; i < mip; i++) {

            char c = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {

                if (strs[j][i] != c)
                    return a;
            }

            a += c;
        }

        return a;
    }
};