class Solution {
  public:
  void dfs(int sr,int sc,vector<vector<int>>& image, int newColor,int m,int n,int col){
      
     image[sr][sc]=newColor;
     vector<int> dx={1,0,-1,0};
     vector<int> dy={0,-1,0,1};
     for(int i=0;i<4;i++){
         int r=sr+dx[i];
         int c=sc+dy[i];
         if(r>=0 and r<m and c>=0 and c<n and image[r][c]==col){
             dfs(r,c,image,newColor,m,n,col);
         }
     }
      
      
  }
  
  
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // Code here
        int m=image.size();
        int n=image[0].size();
        int col=image[sr][sc];
        if (col == newColor) return image;

        dfs(sr,sc,image,newColor,m,n,col);
        return image;
    }
};
