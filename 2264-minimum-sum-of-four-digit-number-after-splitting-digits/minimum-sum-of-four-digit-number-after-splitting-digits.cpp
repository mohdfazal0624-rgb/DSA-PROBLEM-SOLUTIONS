#include <vector>
#include <algorithm>

class Solution {
public:
    int minimumSum(int num) {
        std::vector<int> digits;
        
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }    
        std::sort(digits.begin(), digits.end());
        return (digits[0] * 10 + digits[2]) + (digits[1] * 10 + digits[3]);
    }
};
