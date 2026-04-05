class Solution {
  public:
  
  int fun(int i , vector<int> & arr , int t,      vector<vector<int>>&dp){
     if(t < 0) return 0;
       if( i>= arr.size()){
                        if(t==0) return 1;
                         return 0;
       }
        if( dp[i][t] != -1) return dp[i][t];
       int  temp = arr[i];
        int a = fun( i+1 , arr , t , dp );
       
         int b = fun( i+1 , arr , t - temp,dp);
          return dp[i][t] =  a +b;
  }
    int totalWays(vector<int>& arr, int t) {
        
       
        
        long s =0;
        int n = arr.size();
        for(int i =0;i<n;i++) s+= arr[i];
        if( abs(t)>s || ( t+s)%2) return 0;
        int p = (t+s)/2;
         vector<vector<int>>dp(n , vector<int> ( p+1 , -1));
        return fun( 0 , arr , p , dp);
        
    }
};
