class Solution {
public:
    int getCount(int n) {
        int count = 0;
        // The sum of 1 to k is k*(k+1)/2. 
        // We stop when this sum exceeds n.
        for (long long k = 2; (k * (k + 1)) / 2 <= n; ++k) {
            // Check if (n - sum_of_0_to_k-1) is divisible by k
            long long numerator = n - (k * (k - 1)) / 2;
            if (numerator > 0 && numerator % k == 0) {
                count++;
            }
        }
        return count;
    }
};

