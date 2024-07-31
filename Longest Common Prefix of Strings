class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        if (arr.empty()) return "-1";
        
        string prefix = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            while (arr[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) return "-1";
            }
        }
        
        return prefix.empty() ? "-1" : prefix;
    }
};
