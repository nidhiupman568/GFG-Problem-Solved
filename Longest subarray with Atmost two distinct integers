class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int n = arr.size();
        int i = 0, j = 0;
        int ans = 1;
        unordered_map<int,int>mp;

        while(j != n)
        {
            if(mp.size() <= 2)
            {
                mp[arr[j]]++;
                j++;
            }
            else
            {
                mp[arr[i]]--;
                if(mp[arr[i]] == 0) mp.erase(arr[i]);
                i++;
            }
            
            if(mp.size() <= 2) ans = max(ans,j-i);
        }
        
        return ans;
    }
};
