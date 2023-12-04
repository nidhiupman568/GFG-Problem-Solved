class Solution{   
public:
    int isSumString(string S){
      int n = S.size();
      string a = "";
      for(int i=0;i<n;++i){
          a.push_back(S[i]);
          string ele = "";
          for(int j=i+1;j<n;++j){
              ele.push_back(S[j]);
              vector<string>val;
              val.push_back(a);
              val.push_back(ele);
              int ans = solve(j+1,n,S,val);
              if(ans == 1){
              return 1;
              }
          }
      }
      return 0;
    }
    
    int solve(int pos,int n,string &s,vector<string>&val){
        if(pos == n){
            if(val.size()>=3)return 1;
            return 0;
        }
        string req = sum(val);
        int m = req.size();
        int i = 0,j=pos;
        while(i<m && j<n){
            if(req[i]!=s[j])return 0;
            ++i,++j;
        }
        if(i==m){
        val.push_back(req);
        return solve(j,n,s,val);
        }
        return 0;
    }
    
    string sum(vector<string>&val){
        int n = val.size();
        string a = val[n-1];
        string b = val[n-2];
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string ans = "";
        int l=a.size(),m=b.size(),i=0,j=0;
        int rem = 0;
        while(i<l && j<m){
            int x = a[i]-'0';
            int y = b[j]-'0';
            int ele = x + y + rem;
            int dig = ele%10;
            char p = '0'+dig;
            ans.push_back(p);
            ++i;
            ++j;
            rem = ele/10;
        }
        if(i==l){
            while(j<m){
            int y = b[j]-'0';
            int ele =  y + rem;
            int dig = ele%10;
            char p = '0'+dig;
            ans.push_back(p);
            ++j;
            rem = ele/10;
            }
        }
        if(j==m){
            while(i<l){
            int x = a[i]-'0';
            int ele = x  + rem;
            int dig = ele%10;
            char p = '0'+dig;
            ans.push_back(p);
            ++i;
            rem = ele/10;
            }
        }
        while(rem){
            char dig = rem%10 + '0';
            ans.push_back(dig);
            rem = rem/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
