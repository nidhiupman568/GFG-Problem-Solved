class Solution {
  public:
    int hcf_fun(int a, int b){
        if(b==0)
          return a;
        return hcf_fun(b, a%b);
    }
    
    int lcm_fun(int a, int b){
        return (a*b)/hcf_fun(a, b);
    }
    
    int lcmTriplets(int n) {
        // code here
        if(n<3)
          return n;
        
        if(n&1)
          return lcm_fun(n, lcm_fun(n-1, n-2));
        return max(lcm_fun(n, lcm_fun(n-1, n-3)), lcm_fun(n-1, lcm_fun(n-2, n-3))); 
    }
};
