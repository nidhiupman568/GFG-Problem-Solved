class Solution {
  public:
  int n;
  int arr[4]={-1,1,0,0};
   int brr[4]={0,0,-1,1};
  int solve(int i,int j,vector<vector<int>>&grid,int k)
  {
      
      grid[i][j]=k;
      int count=0;
      for(int l=0;l<4;l++)
      {
          int x=i+arr[l];
          int y=j+brr[l];
          if(x>=0 && x<n && y>=0 && y<n && grid[x][y]==1)
          {
            count+=solve(x,y,grid,k);  
          }
      }
      return count+1;
  }
    int MaxConnection(vector<vector<int>>& grid) {
        // code here
        n=grid.size();
        int k=2;
       unordered_map<int,int>mp;
       mp[0]=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               
                if(grid[i][j]==1)
                {
                   int x=solve(i,j,grid,k);
                   ans=max(ans,x);
                   mp[k]=x;
                   ++k;
                }
            }
        }
     
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
               
                if(grid[i][j]==0)
                { 
                   set<int>st;
                   int count=1;
                   for(int l=0;l<4;l++)
                   {
                       int x=arr[l]+i;
                       int y=brr[l]+j;
                       if(x>=0 && y>=0 && x<n && y<n)
                       {
                           if(st.find(grid[x][y])==st.end())
                           {
                               count+=mp[grid[x][y]];
                               st.insert(grid[x][y]);
                           }
                       }
                   }
                   ans=max(ans,count);
                   
                }
            }
        }
        return ans;
    }
};
