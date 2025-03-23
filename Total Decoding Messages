class Solution {
  public:
    int countWays(string &digits) {
        // Code here
          if(digits.size()<2) return digits.size();
       int prev2=1,prev1=1,ans;
       for(int i=1;i<digits.size();i++){
           ans=0;
           if(digits[i]!='0') ans=prev1;
           if(digits[i-1]=='1' || (digits[i-1]=='2' && digits[i]<='6')) ans+=prev2;
           prev2=prev1;prev1=ans;
       }
        return ans;
    }
};
