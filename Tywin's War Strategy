class Solution {
  public:
    int minSoldiers(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int safe_troop=(n+1)/2;
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i]%k!=0?k-arr[i]%k:0;
        }
        sort(arr.begin(),arr.end());
        int i=0;
        int ans=0;
        while(safe_troop)
        {
            ans+=arr[i];
            i++;
            safe_troop--;
        }
        return ans;
    }
};
