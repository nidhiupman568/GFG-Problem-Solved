class Solution {
  public:
    int n;
    int dp[1001][201][2];
    int solve(int idx,int k,bool canbuy,vector<int> &prices) {
        if(k == 0 || idx >= n) return 0;
        
        int result = INT_MIN;
        
        if(dp[idx][k][canbuy] != -1) 
          return dp[idx][k][canbuy];
        
        if(canbuy) {
            int buy = solve(idx+1,k,false,prices) - prices[idx];
            int not_buy = solve(idx+1,k,true,prices);
            
            result = max({buy,not_buy});
        }
        else{
            int sell =  prices[idx] + solve(idx+1,k-1,true,prices);
            int not_sell = solve(idx+1,k,false,prices);
            result = max({sell,not_sell});
        }
        return dp[idx][k][canbuy] = result;
    }
    int maxProfit(vector<int>& prices, int k) {
        n = prices.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,k,true,prices);
    }
};
