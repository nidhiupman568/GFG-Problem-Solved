class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        unordered_map<int,int>mp;
        stack<pair<int,int>> st;
        
        for (auto it : arr){
            mp[it]++;
        }
        
        int n = arr.size();
        vector<int> ans(n,-1);
        int x = -1;
        int y = -1;
        
        for (int i = n-1; i >= 0;i--){
            while(!st.empty()){
                auto it = st.top();
                x = it.first;
                y = it.second;
                if (y <= mp[arr[i]]){
                    st.pop();
                    continue;
                }
                break;
            }
            if (!st.empty()){
                ans[i] = x;
            }
            st.push({arr[i],mp[arr[i]]});
        }
        
        return ans;
    }
};
