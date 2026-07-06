class Solution {
public:
    string addStrings(string num1, string num2) {
        string s = "";
        int add = 0;

        int n1 = num1.size(), n2 = num2.size();

        if (n1 < n2) {
            for (int i = 0; i < n2 - n1; i++)
                num1 = "0" + num1;
        }

        if (n2 < n1) {
            for (int i = 0; i < n1 - n2; i++)
                num2 = "0" + num2;
        }

        for (int i = num1.length() - 1; i >= 0; i--) {
            add += (num1[i] - '0') + (num2[i] - '0');

            if (add >= 10) {
                s = to_string(add - 10) + s;
                add = 1;
            } else {
                s = to_string(add) + s;
                add = 0;
            }
        }

        if (add)
            s = "1" + s;

        return s;
    }
};