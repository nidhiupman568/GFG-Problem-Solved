class Solution {
  public:
  
    bool solve(int i, int j, string& s1, string& s2, string& s3, vector<vector<int>>& dp) {
        
        if (i == s1.length() && j == s2.length() && i + j == s3.length()) {
            return true;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        int k = i + j;
        
        bool ans1 = false;
        
        if (i < s1.length() && s1[i] == s3[k]) {
            ans1 = solve(i+1, j, s1, s2, s3, dp);
        }
        bool ans2 = false;
        if (j < s2.length() && s2[j] == s3[k]) {
            ans2 = solve(i, j+1, s1, s2, s3, dp);
        }
        
        return dp[i][j] = ans1 || ans2;
    }
    bool isInterleave(string &s1, string &s2, string &s3) {
        // code here
        int n = s1.length();
        int m = s2.length();
        
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        
        return solve(0, 0, s1, s2, s3, dp);
    }
};
