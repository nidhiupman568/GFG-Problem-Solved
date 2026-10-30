class Solution {
  public:
    const int mod=1e9+7;
    long long power(int a,int b){
        if(b==1){
            return a;
        }
        if(b==0){
            return 1;
        }
        long long half=(power(a,b/2))%mod;;
        if(b%2==0){
            return (half*half)%mod;
        }
        else{
            return ((half*half)%mod*a)%mod;
        }


    }
    int cntSubsets(vector<int> &arr, int l, int r) {
        // code here
        int n=arr.size()+1;
        vector<int>freq(n,0);
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        vector<int>prefix(n);
        prefix[0]=freq[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+freq[i];
        }
        vector<long long>dp(n,-1);
        for(int i=0;i<n;i++){
            if(freq[i]==0){
                break;
            }
            dp[i]=((power(2,freq[i])-1)%mod+mod)%mod;
            long long prev=(i-1)>=0?dp[i-1]:1;
            dp[i]=(dp[i]*prev)%mod;

        }
        int count=0;
        for(int i=l;i<=r;i++){
            int prev_comb=(i-1>=0)?dp[i-1]:1;
            if(prev_comb==-1){
                break;
            }
            int total_elements=n-prefix[i]-1;
            long long comb= power(2,total_elements);
            comb=(comb*prev_comb)%mod;
            count=(count+comb)%mod;


        }
        return count;


    }
}; 
