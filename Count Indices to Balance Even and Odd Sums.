class Solution {
  public:
    int cntWays(vector<int>& arr) {
        int n = arr.size();
        int even = 0, odd = 0;
        for(int i = 0;i<n;i++){
            if(i%2==0)odd+=arr[i];
            else even+=arr[i];
        }
        
        int t_even = 0, t_odd = 0, cnt = 0;
        for(int i = 0;i<n;i++){
            if(i%2==0){
                int esum = t_even + (odd - t_odd - arr[i]);
                int osum = t_odd + (even - t_even);
                if(esum == osum)cnt++;
                t_odd += arr[i];
            }
            else{
                int esum = t_even + (odd - t_odd);
                int osum = t_odd + (even - t_even - arr[i]);
                if(esum == osum)cnt++;
                t_even += arr[i];
            }
        }
        
        return cnt;
    }
};
