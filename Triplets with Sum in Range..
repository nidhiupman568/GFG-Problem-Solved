class Solution {
  public:
  
  int countValidPairs(vector<int>& arr, int target) {
      
      int n = arr.size();
      int count = 0;
      
      for (int i = 0; i < n-2; i++) {
          
          int j = i + 1;
          int k = n-1;
          
          
          while (j < k) {
              int sum = arr[i] + arr[j] + arr[k];
              
              if (sum <= target) {
                  count += (k - j);
                  j++;
              } else {
                  k--;
              }
          }
      }
      
      return count;
  }
  
  int countTriplets(vector<int> &arr, int l, int r) {
        // code here
        sort(begin(arr), end(arr));
        int fullRange = countValidPairs(arr, r);
        int leftRange = countValidPairs(arr, l-1);
        
        return fullRange - leftRange;
    }
};
