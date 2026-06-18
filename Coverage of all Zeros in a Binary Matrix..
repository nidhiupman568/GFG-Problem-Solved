class Solution {
public:
    int findCoverage(vector<vector<int>> &grid) {

        int r = grid.size();
        int c = grid[0].size();

        vector<vector<int>> R(r), C(c);

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j]) {
                    R[i].push_back(j);
                    C[j].push_back(i);
                }
            }
        }

        int ans = 0;

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {

                if (grid[i][j] == 0) {

                    auto up = lower_bound(C[j].begin(), C[j].end(), i);
                    auto down = upper_bound(C[j].begin(), C[j].end(), i);

                    if (up != C[j].begin())
                        ans++;

                    if (down != C[j].end())
                        ans++;

                    auto left = lower_bound(R[i].begin(), R[i].end(), j);
                    auto right = upper_bound(R[i].begin(), R[i].end(), j);

                    if (left != R[i].begin())
                        ans++;

                    if (right != R[i].end())
                        ans++;
                }
            }
        }

        return ans;
    }
};
