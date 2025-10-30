class Solution {
  public:
    
    void solve(vector<vector<char>>& grid, vector<vector<int>>& visited,int &n,int &m,int i,int j){
        visited[i][j]=1;
        if(i>0 && grid[i-1][j]=='O' && visited[i-1][j]==0)solve(grid,visited,n,m,i-1,j);
        if(i<n-1 && grid[i+1][j]=='O' && visited[i+1][j]==0)solve(grid,visited,n,m,i+1,j);
        if(j<m-1 && grid[i][j+1]=='O' && visited[i][j+1]==0)solve(grid,visited,n,m,i,j+1);
        if(j>0 && grid[i][j-1]=='O' && visited[i][j-1]==0)solve(grid,visited,n,m,i,j-1);
    }
    
    void fill(vector<vector<char>>& grid) {
        // Code here
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>>visited(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            if(visited[i][0]==0 && grid[i][0]=='O')solve(grid,visited,n,m,i,0);
            if(visited[i][m-1]==0 && grid[i][m-1]=='O')solve(grid,visited,n,m,i,m-1);
        }
        for(int j=0;j<m;j++){
            if(visited[0][j]==0  && grid[0][j]=='O')solve(grid,visited,n,m,0,j);
            if(visited[n-1][j]==0 && grid[n-1][j]=='O')solve(grid,visited,n,m,n-1,j);
        }
        
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='O' && visited[i][j]==0)grid[i][j]='X';
            }
        }
        
    }
};
