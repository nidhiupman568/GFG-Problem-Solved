class Solution {
  public:
      const int MOD = 1000000007;

  int fn(int l, int n, int x,int m,vector<vector<int>>& dp){
      if(n==0 and x==0) return 1;
      if(n==0 or x<0) return 0;
      if(dp[n][x]!=-1) return dp[n][x];
      int ways=0;
      for(int i=1;i<=m;i++){
          ways=(ways+fn(i,n-1,x-i,m,dp))%MOD;
      }
      return dp[n][x]=ways;
  }
    int noOfWays(int m, int n, int x) {
        
        
        // code here
        // vector<vector<int>> dp(n+1,vector<int>(x+1,-1));
        // //return fn(0,n,x,m,dp);
         
         //tabulation
         vector<vector<int>> dp(n+1,vector<int>(x+1,0));
        dp[0][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=x;j++){ // sum or target
                for(int k=1;k<=m;k++){ ///face of dice
                    if(j-k>=0){
                        dp[i][j]=(dp[i][j]+dp[i-1][j-k])%MOD;
                    }
                }
            }
        }
        return dp[n][x];
    }
};
