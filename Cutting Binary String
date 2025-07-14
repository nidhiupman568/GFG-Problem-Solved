class Solution {
  public:
    bool ispower(string s){
        if(s[0] == '0') return false;
        long long val = 0,power = 1;
        for(int i = s.size() - 1;i>=0;i--){
            val+=(s[i] == '1' ? power : 0);
            power*=2;
        }
        power = 1;
        for(int i=0;i<=30;i++){
            if(power == val) return true;
            power*=5;
            if(power > val) break;
        }
        return false;
    }
    int f(int start,string s,vector<int> &dp){
        if(start >= s.size()) return 0;
        if(s[start] == '0') return INT_MAX/2;
        if(dp[start]!=-1) return dp[start];
        int ans = INT_MAX/2;
        string check;
        for(int i = start;i<s.size();i++){
            check+=s[i];
            if(ispower(check)){
                ans = min(ans,1 + f(i+1,s,dp));
                //cout<<check<<" "<<ans<<endl;
            }
        }
        return dp[start] = ans;
    }
    int cuts(string s) {
        int n = s.size();
        vector<int> dp(n,-1);
        if(s[0] == '0') return -1;
        int ans = f(0,s,dp);
        return (ans == INT_MAX/2 ? -1 : ans);
        
    }
};
