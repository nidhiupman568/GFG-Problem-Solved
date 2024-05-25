class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        long long ans = 0, cur = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > k) {
                ans = max(ans, cur);
                cur = 0;
                continue;
            }
            cur = cur + arr[i];
        }
        ans = max(ans, cur);
        return ans;
    }
};
