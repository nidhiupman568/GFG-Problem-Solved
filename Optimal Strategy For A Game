class Solution{
    public:
    
    long long fun(int i,int j,int arr[], vector<vector<long long>> &dp)
    {
        if(i>j)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
            return dp[i][j];
        long long t1=arr[i]+min(fun(i+2,j,arr,dp),fun(i+1,j-1,arr,dp));
        long long t2=arr[j]+min(fun(i,j-2,arr,dp),fun(i+1,j-1,arr,dp));
        
        return dp[i][j]=max(t1,t2);
    }
    long long maximumAmount(int n, int arr[]){
        vector<vector<long long>> dp(n,vector<long long>(n,-1));
        return fun(0,n-1,arr,dp);
    }
};
