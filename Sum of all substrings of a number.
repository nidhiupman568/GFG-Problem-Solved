class Solution {
  public:
    int sumSubstrings(string &s) {
        // code here
        int n=s.size();
       int sum=0;
        for(int i=0;i<n;i++){
           string temp="";
            for(int j=i;j<n;j++){
            temp+=s[j];
            sum+=stoi(temp);
            }
        }
        return sum;
    }
};
