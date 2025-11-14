class Solution {

public:

    int mergeStones(vector<int>& stones, int k) {

        int n = stones.size();

        if ((n - 1) % (k - 1) != 0)

            return -1;

 

        vector<int> prefix(n + 1, 0);

        for (int i = 0; i < n; i++)

            prefix[i + 1] = prefix[i] + stones[i];

 

        auto sum = [&](int l, int r) {

            return prefix[r + 1] - prefix[l];

        };

 

        const int INF = 1e9;

 

        // dp[i][j] = minimum cost to merge stones[i..j] into 1 pile

        // dp2[i][j] = minimum cost to merge stones[i..j] into ANY #piles

        vector<vector<int>> dp(n, vector<int>(n, 0));

        vector<vector<int>> dp2(n, vector<int>(n, 0));

 

        for (int len = 2; len <= n; len++) {

            for (int i = 0; i + len - 1 < n; i++) {

                int j = i + len - 1;

                dp2[i][j] = INF;

 

                // Try splitting into valid partitions

                for (int mid = i; mid < j; mid += (k - 1)) {

                    dp2[i][j] = min(dp2[i][j], dp[i][mid] + dp[mid + 1][j]);

                }

 

                // If the segment can become a single pile

                if ((j - i) % (k - 1) == 0) {

                    dp[i][j] = dp2[i][j] + sum(i, j);

                } else {

                    dp[i][j] = dp2[i][j];

                }

            }

        }

 

        return dp[0][n - 1];

    }

};
