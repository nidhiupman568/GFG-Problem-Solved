class Solution {
  public:
    int findWays(int n) {
        if(n%2 ==1) return 0;
        return helper(0, 0,0,n);
        
    }
    int helper(int pos , int l , int r , int n ){
        if(n==pos){
            if(l > r) return 1;
            else return 0;
        }
        if(l>n/2) return 0;
        if(r>l) return 0;
        return helper(pos+1, l+1,r,n) + helper(pos+1, l,r+1,n);
    }
};
