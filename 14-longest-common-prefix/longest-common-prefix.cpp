class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.empty())
            return "";
            if(strs.size()==1)
            return strs[0];

        int mip = strs[0].length();
        string ss = "";

        for(int i = 1; i < strs.size(); i++) {
            mip = min(mip, (int)strs[i].length());
        }

        int a = 0;

        for(int i = 0; i < mip; i++) {

            string s = strs[0].substr(0, i + 1);

            for(int j = 1; j < strs.size(); j++) {

                string st = strs[j].substr(0, i + 1);

                if(s == st)
                    a = 1;
                else {
                    a = 0;
                    break;
                }
            }

            if(a == 1)
                ss = s;
        }

        return ss;
    }
};