class Solution {
  public:
  int mod= 1e9+7;
    int help(int i, int j, int n, int t, vector<int>&arr, vector<vector<int>>&dp){
        if(i==n) return j==t;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int notPick= help(i+1,j, n,t, arr, dp)%mod;
        int pick= help(i+1, j+arr[i], n,t,arr, dp) % mod;
        
        return dp[i][j]= (pick + notPick)%mod;
        
    }
    int countPartitions(int n, int d, vector<int>& arr) {
        // Code here
        int sum= accumulate(arr.begin(), arr.end(), 0);
        
        vector<vector<int>>dp(n, vector<int>(sum+1, -1));
        sum=sum-d;
        if(sum<0 or sum&1) return 0;
        
        sum=sum/2;
        return help(0, 0,n,sum,arr,dp);
    }
};
