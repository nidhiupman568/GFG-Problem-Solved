class Solution {
  public:
    int nonLisMaxSum(vector<int>& arr) {
        // code here
        // how to do in O(nlogn)?
        int n=arr.size();
        vector<int>lis;
        vector<int>inserted_at(n);
        for(int i=0;i<n;i++){
            if(lis.empty() || lis.back()<arr[i]){
                lis.push_back(arr[i]);
                inserted_at[i]=lis.size();
            }
            else{
                auto it=lower_bound(lis.begin(),lis.end(),arr[i]);
                *it=arr[i];
                inserted_at[i]=it-lis.begin()+1;
            }
        }
        int ans=accumulate(arr.begin(),arr.end(),0);
        int currlen=lis.size();
        for(int i=n-1;i>=0;i--){
            if(inserted_at[i]==currlen){
                ans-=arr[i];
                currlen--;
            }
        }
        return ans;
    }
};
