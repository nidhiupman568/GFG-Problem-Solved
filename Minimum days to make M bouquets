class Solution {
  public:
    int n;
    bool check(vector<int>& arr, int k, int m,int mid){
        int cnt = 0;
        
        for(int i = 0;i < arr.size();i++){
            if(arr[i] <= mid){
                cnt++;
            }
        }
        
        return cnt >= m * k;
    }
    
    
    
    int minDaysBloom(vector<int>& arr, int k, int m) {
        n = arr.size();
        int ans = -1;
        int s = 0, e = *max_element(arr.begin(),arr.end());
        
        while(s <= e){
            int mid = s + (e - s)/2;
            
            if(check(arr,k,m,mid)){
                ans = mid;
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        
        return ans;
    }
};
