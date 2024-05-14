class Solution {
  public:
    int MinimumEffort(int rows, int columns, vector<vector<int>> &heights) {
        // code here
        vector<vector<int>>dp(rows,vector<int>(columns,1000000000));
        dp[0][0] = 0;
        queue<pair<int,int>>q;
        vector<pair<int,int>>dir{{-1,0},{1,0},{0,1},{0,-1}};
        q.push({0,0});
        while(!q.empty()){
            pair<int,int>p = q.front();
            q.pop();
            int x = p.first,y = p.second;
            for(auto it:dir){
                int i = x + it.first,j = y + it.second;
                if(i<0 || j<0 || i>=rows || j>=columns)continue;
                if(dp[i][j]>max(abs(heights[i][j]-heights[x][y]),dp[x][y])){
                    dp[i][j]=max(abs(heights[i][j]-heights[x][y]),dp[x][y]);
                    q.push({i,j});
                }
            }
        }
        return dp[rows-1][columns-1];
    }
};
