class Solution {
  public:
    vector<int> subsetXOR(int n) {
        // code here
        int maxxor =0;
        for(int i=1;i<=n;i++){
              maxxor ^=i;
        }
        vector<int>ans(n);
        if (maxxor==n){
                     for(int i=1;i<=n;i++){
                            ans[i-1]=i;
                     }
                    //  cout<<0<<endl;
                     return ans;
        }
        //  cout<<maxxor<<endl;
       vector<int>a;
       for(int i=n;i>0;i--){
        //   cout<<(maxxor^i)<<" " <<n<<" "<<endl;
              int curr = maxxor^i;
             if ((maxxor!=n) && (curr==n)){
                //  cout<<i<<endl;
                  maxxor^=i;
                  continue;
             }
             else{
                  a.push_back(i);
             }
        } 
        
        reverse(a.begin(),a.end());
        return a;
    }
};
