class Solution {
  public:
    int countStrings(string &s) {
        int n=s.size();
        int ans=0;
        unordered_map<char,vector<int>>map;
        for(int i=0;i<n;i++){
            char ch=s[i];
            int cnt=0;
            for(auto &it:map){
                if(it.first!=ch){
                    cnt+=it.second.size();
                }
            }
            ans+=cnt;
            map[ch].push_back(i);
        }
        if(map.size()!=n){
            ans++;
        }
        return ans;
    }
};
