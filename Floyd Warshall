class Solution {
  public:
    void floydWarshall(vector<vector<int>> &dist) {
        // Code here
        int n = dist.size();
        const int INF = 1e8; // Use the correct INF based on the actual test cases
    
        for (int k = 0; k < n; ++k) {
            for (int i = 0; i < n; ++i) {
                if (dist[i][k] == INF) continue; // Skip if no path from i to k
                for (int j = 0; j < n; ++j) {
                    if (dist[k][j] == INF) continue; // Skip if no path from k to j
                    if (dist[i][j] > dist[i][k] + dist[k][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }
    }
};
