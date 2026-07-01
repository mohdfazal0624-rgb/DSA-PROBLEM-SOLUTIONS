
class Solution {
public:
    string reverseWords(string a) {
        vector<string> st;
        string b = "";

        for (int i = 0; i < a.length(); i++) {
            if (a[i] != ' ') {              // Changed from isalnum()
                b += a[i];
            }
            else {
                if (!b.empty()) {           // Don't push empty strings
                    st.push_back(b);
                    b = "";
                }
            }
        }

        // Push the last word
        if (!b.empty())
            st.push_back(b);

        string c = "";

        for (auto it = st.rbegin(); it != st.rend(); it++) {
            if (!c.empty())
                c += " ";
            c += *it;
        }

        return c;
    }
};