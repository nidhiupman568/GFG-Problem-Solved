class Solution {
  public:
    string smallestNumber(int s, int d) {
        string ans(d,'0');
        // ans[0]='1';
        int i=ans.size()-1;
        s-=1;
        while(s && i>=0){
            if(s>9){
                s-=(9-(ans[i]-'0'));
                ans[i]='9';
            }
            else{
                ans[i]=s+'0';
                break;
            }
            i--;
        }
        if((i<0) || (!isdigit(ans[0]+=1))) ans="-1";
        return ans;
    }
};
