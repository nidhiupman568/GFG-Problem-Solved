class Solution {
  public:
    using ll=long long;
    static const ll mod=1e9+7;
    vector<int> findWays(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        vector<vector<ll>>dp(2,vector<ll>(n+1,0ll));
        dp[0][0]=1ll;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(grid[i][j]!=2)dp[0][j+1]=(dp[0][j+1]+dp[0][j])%mod;
                if(grid[i][j]!=1) dp[1][j]=(dp[1][j]+dp[0][j])%mod;
            }
            if(i==(n-1))break;
            for(ll j=0;j<=n;j++){
                dp[0][j]=dp[1][j];
                dp[1][j]=0;
            }
        }
        ll tt=dp[0][n-1];
        
        for(auto&v:dp){
            for(auto&i:v)i=0ll;
        }
        
        ll maxi=0ll;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if((i||j)&&!dp[0][j])continue;
                dp[0][j]+=grid[i][j];
                if(grid[i][j]!=2)dp[0][j+1]=max(dp[0][j+1],dp[0][j]);
                if(grid[i][j]!=1) dp[1][j]=max(dp[1][j],dp[0][j]);
            }
            if(i==(n-1))break;
            for(ll j=0;j<=n;j++){
                dp[0][j]=dp[1][j];
                dp[1][j]=0;
            }
        }
        
        maxi=dp[0][n-1];
        
        return {tt,maxi};
    }
};
