class Solution {
  public:
    int minChar(string& st) {
        string s = st;
        reverse(st.begin(),st.end());
        s+="$"+st;
        int n = s.size();
        vector<int> lps(n);
        int len = 0;
        lps[0]=0;
        int i = 1;
        while(i<n){
            if(s[i]==s[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len==0){
                    lps[i]=0;
                    i++;
                }
                else{
                    len = lps[len-1];
                    
                }
            }
        }

        return (n/2)-lps[n-1];
    }
};
