class Solution {
  public:
    int balanceSums(vector<vector<int>>& mat) {
        // code here
        int realsum = 0, rows = mat.size(), maxi = 0;
        for(int i = 0;i < rows; i++){
            int rowsum = 0, colsum = 0;
            for(int j = 0;j < rows; j++){
                rowsum += mat[i][j];
                realsum += mat[i][j];
                colsum += mat[j][i];
            }
            maxi = max({colsum, maxi, rowsum});
        }
        return rows * maxi - realsum;
    }
};
