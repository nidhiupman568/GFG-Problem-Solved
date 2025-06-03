class Solution {
  public:
    int lcs(int i, int j, int k, string& s1, string& s2, string& s3, vector<vector<vector<int>>>& dp){
        if(i<0 || j<0 || k<0)
            return 0;
        if(dp[i][j][k] != -1)
            return dp[i][j][k];
        
        if(s1[i]==s2[j] && s1[i]==s3[k])
            return dp[i][j][k] = 1 + lcs(i-1, j-1, k-1, s1, s2, s3, dp);
        return dp[i][j][k] = max({lcs(i-1, j, k, s1, s2, s3, dp), lcs(i, j-1, k, s1, s2, s3, dp), lcs(i, j, k-1, s1, s2, s3, dp)});
            
    }
  
    int lcsOf3(string& s1, string& s2, string& s3) {
        // Code here
        int n1 = s1.size();
        int n2 = s2.size();
        int n3 = s3.size();
        
        vector<vector<vector<int>>> dp(n1, vector<vector<int>> (n2, vector<int> (n3, -1)));
        
        return lcs(n1-1, n2-1, n3-1, s1, s2, s3, dp);
    }
};
