class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges,int distanceThreshold) {
         // lets apply floyd warshall algo to find all the shortest paths 
        // create matrix where each node distance to other is infinity
        vector<vector<int>>matrix(n,vector<int>(n,10001));
        // node to itself distance is 0
        for(int i=0;i<n;i++){
            matrix[i][i]=0;
        }
        // fill it with given input
        for(auto it :edges){
            matrix[it[0]][it[1]]=matrix[it[1]][it[0]]=it[2];
        }
        // lets apply floyd warshall algop
        // shortest path is minm path from i to j via k or directly i to j 
        for(int k=0;k<n;k++){
	       for(int i=0;i<n;i++){
	           for(int j=0;j<n;j++){
	               matrix[i][j]=min(matrix[i][j], matrix[i][k] + matrix[k][j]);
	           }
	       }
	    }
        int ans=-1;
        int neighbors=n+1;
        for(int i=0;i<n;i++){
            // lets count cities under threshold
            int count=0;
            for(int j=0;j<n;j++){
                if(matrix[i][j]<= distanceThreshold)count++;
            }
            // to get city with lowest count , and if more than 1 is present the later one will be stored
            if(count<=neighbors){
                neighbors=count;
                ans=i;
            }
        }
        return ans;
     }
};
