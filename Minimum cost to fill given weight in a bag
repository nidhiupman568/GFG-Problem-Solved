class Solution {
  public:
    int dp[202][202];
    int solve(vector<int>&cost,int n,int w,int idx){
        if(w==0) return 0;
        if(idx==n) return 1e5+1;
        if(dp[w][idx]!=-1) return dp[w][idx];
        int ans=1e5+1;
        if(cost[idx]!=-1 && w>=idx+1) {
            ans= cost[idx] + min(solve(cost,n,w-idx-1,idx),solve(cost,n,w-idx-1,idx+1));
        }
          ans=min(ans,solve(cost,n,w,idx+1));
          return dp[w][idx]=ans;
    }
    int minimumCost(int n, int w, vector<int> &cost) {
        memset(dp,-1,sizeof(dp));
        return solve(cost,n,w,0);
    }
};
