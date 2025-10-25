class Solution {
  public:
    bool isPossible(vector<int>& nums, int k) {
        // code here
        sort(nums.begin(),nums.end());
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({nums[0],1});
        for(int i=1;i<nums.size();i++){
            while(!pq.empty() && pq.top().first!=nums[i] && pq.top().first!=nums[i]-1){
                if(pq.top().second<k)return false;
                pq.pop();
            }
            if(pq.empty())pq.push({nums[i],1});
           else if(pq.top().first!=nums[i]){
                auto x=pq.top();pq.pop();
                x.second++;
                x.first++;
                pq.push(x);
            }
            else{
                pq.push({nums[i],1});
            }
        }
      while(!pq.empty()){
        if(pq.top().second<k)return false;
        pq.pop();
      }
      return true;
    }
};

