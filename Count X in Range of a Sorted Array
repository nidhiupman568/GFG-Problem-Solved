class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>v;
        int n=arr.size();
        for(auto i:queries)
        {
            int l=i[0];
            int r=i[1];
            int x=i[2];
            
            int left=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
            int right=upper_bound(arr.begin(),arr.end(),x)-arr.begin()-1;
            if(left==n || arr[left]!=x)
            {
                v.push_back(0);
                continue;
            }
            left=max(l,left);
            right=min(right,r);
            if(right<left)
            {
                v.push_back(0);
            }
            else
            {
                v.push_back(right-left+1);
            }
        }
        return v;
    }
};
