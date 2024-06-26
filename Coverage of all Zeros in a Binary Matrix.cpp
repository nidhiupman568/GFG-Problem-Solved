class Solution {
  public:
    int findCoverage(vector<vector<int>>& mat) {
        // Code here
        int ans=0;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    if(i+1<n)
                        ans+=mat[i+1][j];
                    if(i-1>=0)
                        ans+=mat[i-1][j];
                    if(j+1<m)
                        ans+=mat[i][j+1];
                    if(j-1>=0)
                        ans+=mat[i][j-1];
                }
            }
        return ans;
    }
};
