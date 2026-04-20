class Solution {
  public:
  
    int derangeCount(int n) {
        // code here
        if(n==1) return 0;
        int prev2=0;
        int prev1=1;
        for(int i=2; i<=n; i++){
            int curr=(i)*(prev2+prev1);
            prev2=prev1;
            prev1=curr;
        }
        return prev2;
    }
};
