class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int c = 1;

        for (int i = 1; i <= word.size(); i++) {

           
            if (i < word.size() && word[i] == word[i - 1] && c < 9) {
                c++;
            }
            else {
                
                comp += to_string(c);
                comp += word[i - 1];

                
                c = 1;
            }
        }

        return comp;
    }
};