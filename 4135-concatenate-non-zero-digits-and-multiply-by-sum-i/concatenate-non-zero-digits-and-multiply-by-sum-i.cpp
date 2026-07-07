class Solution {
public:
    long long sumAndMultiply(int n) {
        if (n == 0)
            return 0;

        string s = "";
        long long sum = 0;

        while (n != 0) {
            int digit = n % 10;

            if (digit != 0) {
                sum += digit;
                s = to_string(digit) + s;
            }

            n /= 10;
        }

        if (s.empty())
            return 0;

        return sum * stoll(s);
    }
};