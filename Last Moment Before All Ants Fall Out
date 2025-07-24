class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans=0;
        for(int &e:left)ans = max(ans,e);
        for(int &e:right)ans = max(ans,n-e);
        return ans;
    }
};
