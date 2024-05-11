class Solution {
  public:
  vector<long long> ans;
    vector<long long> jugglerSequence(long long n) {
        // code here
        if(ans.empty()){
            ans.push_back(n);
        
        }
        if(n == 1){
            return ans;
        }
        else{
            if(n%2 == 0){
                n = sqrt(n);
                ans.push_back(n);
            }
            else{
                n = sqrt(n) * sqrt(n) * sqrt(n);
                ans.push_back(n);
                 }
        }
        return jugglerSequence(n);
    }
};
