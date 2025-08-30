class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        
        vector<int> in(n,0);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                if(mat[i][j]){
                    in[j]++;
                    in[i]--;
                    
                }
            }
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if(in[i]==n-1) return i;
        }
        return -1;
    }
};
