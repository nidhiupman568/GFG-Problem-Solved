class Solution {
  public:
    static bool help(string &a , string &b){
        return a + b > b + a;
    }
    string findLargest(vector<int> &arr) {
            vector<string> brr;
            
            for(auto &i : arr){
                brr.push_back(to_string(i));
            }
            
            sort(brr.begin() , brr.end() , help);
            
            string ans = "";
            
            for(auto &i : brr){
                ans += i;
            }
            
            if(ans[0] == '0') return "0";
            
            return ans;
        
    }
};
