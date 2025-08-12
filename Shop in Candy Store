class Solution {
  public:
    vector<int> minMaxCandy(vector<int>& prices, int k) {
        sort(prices.begin(), prices.end());
        vector<int> ans(2, 0);
        
        for(int i=0; i<(prices.size()+k)/(k+1); ++i){
            ans[0] += prices[i];
            ans[1] += prices[prices.size()-i-1];
        }
        
        return ans;
    }
};
