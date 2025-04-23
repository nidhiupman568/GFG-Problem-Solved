class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        vector<int> res;
        int n = arr.size();
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }
        for(auto& it: mp)
        {
            if(it.second == 1)
                res.push_back(it.first);
        }
        if(res[0] > res[1])
            swap(res[0],res[1]);
        return res;
    }
};
