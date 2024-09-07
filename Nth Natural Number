class Solution {
public:
    long long findNth(long long n) {
        long long result = 0;
        long long multiplier = 1;
        
        while (n > 0) {
            result += (n % 9) * multiplier;
            n /= 9;
            multiplier *= 10;
        }
        
        return result;
    }
};
