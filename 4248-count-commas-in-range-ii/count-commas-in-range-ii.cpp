class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long start = 1000;
        int commas = 1;

        while (start <= n) {
            ans += (n - start + 1);

            start *= 1000;
            commas++;
        }

        return ans;
    }
};