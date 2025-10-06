class Solution {
  public:
  
  vector<int> xi={2,2,-2,-2,1,1,-1,-1};
  vector<int> yi={1,-1,1,-1,2,-2,2,-2};
    bool isSafe(int n, int x, int y, vector<vector<int>>&mat) {
        if(x>=0&&x<n&&y>=0 && y<n&&mat[x][y]==-1) {
            return true;
        }
        return false;
    }
    bool knightMovement(vector<vector<int>>&mat, int x, int y, int &count, int n) {
        if(count==(pow(n,2)-1)) {
            mat[x][y]=count;
            return true;
        }
        
        
        for(int i=0;i<xi.size();i++) {
            if(isSafe(n,x+xi[i],y+yi[i],mat)) {
                mat[x][y]=count;
                count++;
                bool ans=knightMovement(mat,x+xi[i],y+yi[i],count,n);
                if(ans) {
                    return true;
                } else {
                    count--;
                    mat[x][y]=-1;
                }
            }
        }
        return false;
        
        
        
    }
    vector<vector<int>> knightTour(int n) {
        // code here
        vector<vector<int>>ans=vector<vector<int>>(n,vector<int>(n,-1));
        int count=0;
        vector<vector<int>>mid;
        if(knightMovement(ans,0,0,count,n)) {
            return ans;
        } else {
            return mid;
        }
    }
};

