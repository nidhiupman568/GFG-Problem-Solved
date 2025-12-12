class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        if (mat.empty() || mat[0].empty()) return {};

        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> res(n, vector<int>(m));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                res[j][i] = mat[i][j];
            }
        }
        return res;
    }
};
