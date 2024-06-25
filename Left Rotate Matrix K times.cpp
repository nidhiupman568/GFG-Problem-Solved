class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>ans(m,vector<int>(n,0));
        k=k%n;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++){
                int val=mat[i][j];
                if(j-k>=0)
                 ans[i][j-k]=val;
                else{
                    ans[i][j-k+n]=val;
                }
            }
        }
        return ans;
    }
};
