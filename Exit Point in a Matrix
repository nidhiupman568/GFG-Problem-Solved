class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        int pos = 0, i = 0, j = 0, pi = -1, pj = -1;
        int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
        while(0 <= i and i < n and 0 <= j and j < m){
            if(matrix[i][j]) matrix[i][j] = 0, pos = (pos + 1) % 4;
            pi = i, pj = j, i += dx[pos], j += dy[pos];
        }
        return {pi, pj};
    }
};
