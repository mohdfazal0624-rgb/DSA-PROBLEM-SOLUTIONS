class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int f = 1;
        int j = 0;

        for (int i = 1; i < word.size(); i++) {
            if (word[i] == word[j]) {
                f++;
            } else {
                while (f > 9) {
                    comp += to_string(9);
                    comp += word[j];
                    f -= 9;
                }

                comp += to_string(f);
                comp += word[j];

                j = i;
                f = 1;
            }
        }

        // Process the last group
        while (f > 9) {
            comp += to_string(9);
            comp += word[j];
            f -= 9;
        }

        comp += to_string(f);
        comp += word[j];

        return comp;
    }
};