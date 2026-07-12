class Solution {
  public:
  
    int maxAmount(vector<int>& arr, int k) {
        // code here
        const int MOD = 1000000007;
        priority_queue<int>pq;
        for(int x : arr)
        pq.push(x);
        
        int ans = 0;
        while(k--)
        {
            int x = pq.top();
            if(x<=0)
            return ans;
            pq.pop();
            ans = ((ans%MOD) + (x%MOD))%MOD;
            x--;
            pq.push(x);
        }
        return ans;
        
  
    }
};
