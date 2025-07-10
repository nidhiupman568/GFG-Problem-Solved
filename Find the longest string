class Solution {
  public:
    string longestString(vector<string> &words) {
        // code here
        unordered_map<string,int>m;
        for(int i=0;i<words.size();i++)
        m[words[i]]=1;
        string a=words[0];
        int ans=0;
        for(int i=0;i<words.size();i++){
            int c=0;
            string b="";
            if(ans>words[i].size())
            continue;
            for(int j=0;j<words[i].length();j++){
                b+=words[i][j];
                if(m[b]>0)
                c+=1;
                else
                break;
            }
            if(c>ans){
a=words[i];
ans=c;
            } else if(c==ans){
                if(a>words[i])
                a=words[i];
            }
        }
       return a.length()==ans?a:"";
    
    }
};
