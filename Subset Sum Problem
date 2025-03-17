class Solution {
  public:
    bool solve(int i,int curSum,vector<int>& arr,int sum){
        if(curSum>sum) return false;
        if(curSum==sum) return true;
        if(i==arr.size()) return false;
        
        if(solve(i+1,curSum+arr[i],arr,sum)){
            return true;   
        }
        solve(i+1,curSum,arr,sum);
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        return solve(0,0,arr,sum);
    }


};
