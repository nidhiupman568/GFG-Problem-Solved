class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        // Code here
        int n=arr.size();
        vector<int>small(n, 1e9), big(n, -1e9);
        
        small[0]=arr[0];
        for(int i=1; i<n; i++){
            small[i]=min(small[i-1], arr[i]);
        }
        
        big[n-1]=arr[n-1];
        for(int i=n-2; i>=0; i--){
            big[i]=max(big[i+1], arr[i]);
        }
        
        for(int i=0; i<n; i++){
            if(arr[i]>small[i] && arr[i]<big[i]){
                return {small[i], arr[i], big[i]};
            }
        }
        return {};
    }
};
