class Solution {
  public:
    string smallestWindow(string &s, string &p) {
         if (s.empty() || p.empty() || p.size() > s.size()) return "";

    // Frequency of characters in p
    unordered_map<char, int> need;
    for (char c : p) need[c]++;

    unordered_map<char, int> have;
    int required = need.size();   // number of unique chars needed
    int formed = 0;               // number of chars meeting requirement

    int left = 0, right = 0;
    int minLen = INT_MAX, start = 0;

    for (right = 0; right < s.size(); right++) {
        char c = s[right];
        have[c]++;

        if (need.count(c) && have[c] == need[c])
            formed++;

        // Try to shrink from left
        while (left <= right && formed == required) {
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                start = left;
            }

            char d = s[left];
            have[d]--;
            if (need.count(d) && have[d] < need[d])
                formed--;
            left++;
        }
    }

    return minLen == INT_MAX ? "" : s.substr(start, minLen);
        
    }
};
