class Solution {
  public:
    int countSetBits(int n) {
        // code here
        int limit = log2(n);    // number of bits limit
        
        int ans=0;
        
        for (int idx=0; idx<=limit; idx++) {
            int pattern = (1<<(idx+1));
            
            int noOfCycles = (n+1)/pattern; // no. of complete patterns
            
            int noOfOnes = noOfCycles*(pattern/2);  // each pattern has half zeroes and half ones
            
            ans += noOfOnes;
            
            int remain = (n+1)%pattern; // remaining numbers in last incomplete pattern
            
            remain -= (pattern/2);    // remove count of zeroes
            
            if (remain>0) ans += remain;    // add remaining ones from last incomplete pattern
        }
        
        return ans;
    }
};
