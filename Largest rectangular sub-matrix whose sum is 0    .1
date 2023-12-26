class Solution{
  public:
  vector<vector<int>> sumZeroMatrix(vector<vector<int>> a){
      //Code Here
      int n=a.size();
      int m=a[0].size();
      vector<vector<int>> prefix(n+1,vector<int> (m+1,0));
      pair<int,int> ans1={-1,-1},ans2;
      int val=-1;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            prefix[i+1][j+1]=prefix[i+1][j]+prefix[i][j+1]+a[i][j]-prefix[i][j];
            if(prefix[i+1][j+1]==0&&val==-1){
                ans2={i+1,j+1};
                ans1={0,0};
                val=(i+1)*(j+1);
            }
            if(prefix[i+1][j+1]==0&&val<((i+1)*(j+1))){
                ans2={i+1,j+1};
                ans1={0,0};
                val=(i+1)*(j+1);
            }
        }   
      }
      for(int i=1;i<=n;i++){
          for(int j=1;j<=m;j++){
              for(int k=0;k<=i;k++){
                for(int z=0;z<=j;z++){
                    if(k==i&&z==j) continue;
                    int ne= prefix[i][j]-prefix[i][z]-prefix[k][j]+ prefix[k][z];
                    
                    if(ne==0){
                        int l=j-z;
                        int b=i-k;
                        if(k+1>i||z+1>j)
                        continue;
                        if(l*b>val){
                            ans1={k,z};
                            ans2={i,j};
                            val=l*b;
                        }
                        if(l*b==val){
                            if(ans1.second==z){
                                if((ans2.first-ans1.first)<(i-(k))){
                                     ans1={k,z};
                                     ans2={i,j};
                                     val=l*b;
                                }
                            }
                            else{
                                if(ans1.second>z){
                                     ans1={k,z};
                                     ans2={i,j};
                                     val=l*b;
                                }
                            }
                        }
                    }
                }
              }
          }
      }
      vector<vector<int>> ans;
     for(int i=ans1.first;i<ans2.first;i++){
          vector<int> temp;
          for(int j=ans1.second;j<ans2.second;j++){
              temp.push_back(a[i][j]);
          }
          ans.push_back(temp);
      }
      return ans;
  }
};

 
