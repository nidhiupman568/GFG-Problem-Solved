class Solution {
  public:
    string countAndSay(int n) {
        // code here
        string res="1", temp="";
        for(int i=1; i<n; i++){
            int count=1;
            for(int j=0; j<res.size(); j++){
                while(res[j]==res[j+1]){
                    count++;
                    j++;
                }
                temp = temp+to_string(count)+res[j];
                count=1;
            }
            res=temp;
            temp="";
        }
        return res;
    }
};
