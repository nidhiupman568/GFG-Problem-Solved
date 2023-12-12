class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        vector<vector<int>> dp(n, vector<int> (m));
        
        for(int i = 0; i < n; i++){
            dp[i][m - 1] = M[i][m - 1];
        }
        
        for(int j = m - 2; j > -1; j--){
            for(int i = 0; i < n; i++){
                dp[i][j] = dp[i][j + 1];
                
                if(i > 0)
                    dp[i][j] = max(dp[i][j], dp[i - 1][j + 1]);
                if(i < n - 1)
                    dp[i][j] = max(dp[i][j], dp[i + 1][j + 1]);
                    
                dp[i][j] += M[i][j];
            }
        }
        
        int ans = 0;
        
        for(int i = 0; i < n; i++)
            ans = max(ans, dp[i][0]);
            
        return ans;
    }
};
