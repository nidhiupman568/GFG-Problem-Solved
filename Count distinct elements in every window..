class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int, int> freq;
        vector<int> ans;
        
        for (int i = 0; i < k; i++) {
            freq[arr[i]]++;
        }
        ans.push_back(freq.size());
        
        int j = 0;
        for (int i = k; i < n; i++) {
            freq[arr[j]]--;
            if (freq[arr[j]] == 0)
                freq.erase(arr[j]);
            j++;
            freq[arr[i]]++;
            ans.push_back(freq.size());
        }
        return ans;
    }
};
