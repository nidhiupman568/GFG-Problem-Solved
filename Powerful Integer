class Solution {
  public:
    int powerfulInteger(vector<vector<int>> &intervals, int k) {
        // code here
        int n = intervals.size(), ans = -1;
        vector<int> start(n), end(n);
        for(int i = 0; i < n; i++) {
            start[i] = intervals[i][0];
            end[i] = intervals[i][1];
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        for(int i = 0, j = 0; j < n; j++) {
            for(; i < n && start[i] <= end[j]; i++) {}
            if(i - j >= k) ans = end[j];
        }
        return ans;
    }
};
