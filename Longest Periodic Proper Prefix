class Solution {
  public:
    int getLongestPrefix(string &s) {
        // code here
    int n = s.size();
    vector<int> z(n, 0);
    // Compute Z-function
    for (int i = 1, l = 0, r = 0; i < n; i++) {
        if (i <= r) z[i] = min(r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]]) z[i]++;
        if (i + z[i] - 1 > r) l = i, r = i + z[i] - 1;
    }
    // Check lengths from largest to smallest
    for (int len = n - 1; len >= 1; len--) {
        bool ok = true;
        for (int i = len; i < n; i += len) {
            if (z[i] < min(len, n - i)) { ok = false; break; }
        }
        if (ok) return len;
    }
    return -1;
    }
};
