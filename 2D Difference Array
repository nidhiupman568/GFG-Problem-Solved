class Solution {
  public:
    vector<vector<int>> applyDiff2D(vector<vector<int>>& mat,
                                    vector<vector<int>>& opr) {
        // code here
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> diff(n, vector<int>(m, 0));
        for (auto& it : opr){
            int v = it[0], r1 = it[1], c1 = it[2], r2 = it[3], c2 = it[4];
            for (int i = r1; i <= r2; i++){
                diff[i][c1] += v;
                if (c2+1<m) diff[i][c2+1] -= v;
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 1; j < m; j++){
                diff[i][j] = diff[i][j-1] + diff[i][j];
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                mat[i][j] += diff[i][j];
            }
        }
        return mat;
    }
};
