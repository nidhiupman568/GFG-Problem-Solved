class Solution {
  public:
    int maxKPower(int &n, int &k) {
        // code here
        vector<int> sieve(max(n, k) + 1, 0);
        sieve[0] = 1; sieve[1] = 1;
        for(int i = 2; i <= max(n, k); i++) {
            if(sieve[i] != 0) continue;
            for(int j = i; j <= max(n, k); j += i) sieve[j] = i;
        }
        unordered_map<int, int> mp1, mp2;
        for(int i = 2; i <= n; i++) {
            for(int j = i; j > 1; j /= sieve[j]) mp1[sieve[j]]++;
        }
        for(int j = k; j > 1; j /= sieve[j]) mp2[sieve[j]]++;
        int ans = 1e9;
        for(auto it : mp2) {
            if(mp1.count(it.first) == 0) return 0;
            ans = min(ans, mp1[it.first] / it.second);
        }
        if(ans == 1e9) ans = 0;
        return ans;
    }
};
