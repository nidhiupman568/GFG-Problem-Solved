class Solution {
  public:
  int f(vector<int>& arr, int i, int j, vector<vector<int>>& dp) {
    
    if (i == j) {
        return 0;
    }

    
    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    int mini = INT_MAX;

    
    for (int k = i; k <= j - 1; k++) {
        int ans = f(arr, i, k, dp) + f(arr, k + 1, j, dp) + arr[i - 1] * arr[k] * arr[j];
        mini = min(mini, ans);
    }


    return dp[i][j] = mini;
}

    int matrixMultiplication(vector<int> &arr) {
        int n = arr.size();
        int i = 1;
        int j = n - 1;

        
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return f(arr, i, j, dp);
    }
};
