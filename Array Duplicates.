class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int>mp;
        for(auto it:arr)
        {
            mp[it]++;
        }
        int o=-1;
        vector<int>ans;
        for(auto it:mp)
        {
            if(it.second>1)
            {
                o=it.first;
                ans.push_back(o);
            }
        }
        return ans;
    }
};  
