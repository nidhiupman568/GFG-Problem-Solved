class Solution {
  public:
    long long reversedBits(long long n) {
        // code here
        string s="";
        while(n!=0){
            s=s+to_string(n%2);
            n=n/2;
        }
        while(s.length()!=32){
            s.push_back('0');
        }
        reverse(s.begin(),s.end());
        long long int ans=0;
        for(int i=0;i<32;i++){
            ans=ans+(s[i]-'0')*pow(2,i);
        }
        return ans;
    }
};
