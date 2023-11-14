class Solution {
  public:
    int count(string s)
    {
        int n=s.length();
        vector<int> last(256,-1);
        int dp[n+1];
        dp[0]=1;
        for(int i=1;i<n+1;i++)
        {
            dp[i]=2*dp[i-1];
            if(last[s[i-1]]!=-1) dp[i]-=dp[last[s[i-1]]];
            
            last[s[i-1]]=i-1;
        }
        return dp[n];
    }
    string betterString(string str1, string str2) {
        // code here
        return count(str2)>count(str1)? str2:str1;
    }
};
