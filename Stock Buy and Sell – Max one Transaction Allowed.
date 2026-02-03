class Solution {
  public:
    int maxProfit(vector<int> &prices) {        
        int result = INT_MIN;
        int key = INT_MAX;
        for(int i=0; i<prices.size(); i++){
            key = min(key, prices[i]);
            result = max(result, prices[i]-key);
        }
        return result >= 0 ? result : 0;
    }
};
