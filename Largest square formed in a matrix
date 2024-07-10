class Solution {
  public:
    int maxSquare(int n, int m, vector<vector<int>> mat) {
        vector<vector<int>> dp(n, vector<int>(m, 0));
        int maxi=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(i==n-1)
                {
                    dp[i][j]=mat[i][j];
                }
                else if(j==m-1)
                {
                    dp[i][j]=mat[i][j];
                }
                else if(mat[i][j]==0)
                {
                    dp[i][j]=0;
                }
                else if(mat[i][j]==0)
                {
                    dp[i][j]=0;
                    continue;
                }
                else if(mat[i][j]==1)
                {
                    dp[i][j]=1+min(dp[i][j+1],min(dp[i+1][j+1],dp[i+1][j]));
                }
                maxi=max(maxi,dp[i][j]);
            }
        }
        return maxi;
    }
};
