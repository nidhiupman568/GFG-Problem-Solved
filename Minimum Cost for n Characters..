class Solution {
  public:
    long long minCost(long long n, long long i, long long d, long long c) {
        long long ans = n * i;  // Insert all characters

        while (n > 1) {
            // If n is even, the previous length can be n/2.
            if (n % 2 == 0) {
                ans = min(ans, c + minCost(n / 2, i, d, c));
            } 
            else {
                // Option 1:
                // Reach n-1, then insert one character.
                ans = min(ans, i + minCost(n - 1, i, d, c));

                // Option 2:
                // Reach n+1, then delete one character.
                ans = min(ans, d + minCost(n + 1, i, d, c));
            }

            break;
        }

        return ans;
    }
};
