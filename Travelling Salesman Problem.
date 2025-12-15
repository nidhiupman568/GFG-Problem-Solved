class Solution {
  public:
    virtual int tsputil(int i, int mask, vector<vector<int>> &cost, vector<vector<int>> &dp, int &n){
   mask = mask ^ (1<<i);
   if(mask == 0)
     return cost[i][0];
   if(dp[i][mask] != -1)
        return dp[i][mask]; 
   
      int mini = INT_MAX;
      for(int j=0; j<n; j++){
     if(mask & (1<<j)){
   int newCost = cost[i][j] + tsputil(j, mask, cost, dp, n);
   mini = min(mini, newCost);
 }
   }   
   return dp[i][mask] = mini;
 }
  
    virtual int tsp(vector<vector<int>>& cost){
      int n = cost.size();
      int mask = (1<<n)-1;
      
   vector<vector<int>> dp(n, vector<int>(mask+1, -1));
   
   return tsputil(0, mask, cost, dp, n);
    }
};
