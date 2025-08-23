class Solution {
  public:
    bool isOkk(vector<int> &arr, int m, int k){
        int count=1, sum=0;
        for(auto z: arr){
            sum+=z;
            if(sum>m){
                count++;
                sum=z;
            }
        }
        return count<=k;
    }
  
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(k>n)
          return -1; 
        
        int sum=0, maxi = INT_MIN;
        for(auto z: arr){
            sum+=z;
            maxi = max(maxi, z);
        }
        
        
        int l=maxi, r=sum, ans=INT_MAX;
        
        while(l<=r){
            int m = l+(r-l)/2;
            if(isOkk(arr, m, k)){
                ans = min(ans, m);
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        
        return ans;
        
    }
};
