class Solution {
  public:
    int minDeletions(vector<int>& arr) {
        // code here
        int n=arr.size();
        
        vector<int>ans;
        for(int &i:arr){
            auto it=lower_bound(ans.begin(), ans.end(), i);
            if(it==ans.end()){
                ans.push_back(i);
            }else{
                *it=i;
            }
        }
        
        return n-ans.size();
    }
};
