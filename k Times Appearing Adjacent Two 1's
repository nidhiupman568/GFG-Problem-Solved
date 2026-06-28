class Solution {
  public:
  
    int mod=1e9+7;
    
    long long solve(int i, int prev, int adj, int n, int k, vector<vector<vector<int>>>&dp){
        
        if(i==n){
            if(adj==k) return 1;
            return 0;
        }
        
        if(prev!=-1 && dp[i][prev][adj]!=-1) return dp[i][prev][adj];
        
        long long one=0, zero=0;
        
        if(prev==1){
            one=solve(i+1, 1, adj+1, n, k, dp);
        }else{
            one=solve(i+1, 1, adj, n, k, dp);
        }
        zero=solve(i+1, 0, adj, n, k, dp);
        
        long long ans=(one+zero)%mod;
        
        if(prev!=-1) dp[i][prev][adj]=ans;
        
        return ans;
        
    }
  
    int countStrings(int n, int k) {
        // code here
        vector<vector<vector<int>>>dp(n, vector<vector<int>>(2, vector<int>(n, -1)));
        return solve(0, -1, 0, n, k, dp);
    }
};
