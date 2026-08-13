class Solution {
  public:
    vector<int> maxDistance(int V, int src, vector<vector<int>> &edges) {
        // code here
        vector<int>in(V,0);
        vector<int>ans(V,INT_MIN);
        vector<vector<pair<int,int>>>adj(V);
        int m = edges.size();
        queue<int>q;
        
        for(int i=0;i<m;i++){
            in[edges[i][1]]++;
            adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});
        }
        
        for(int i=0;i<V;i++){
           if(in[i]==0)q.push(i);
        } 
        
        ans[src] = 0;
        
        while(!q.empty()){
            
           int node = q.front();
           q.pop();
           
           for(int i=0;i<adj[node].size();i++){
               
               int u = node;
               int v = adj[node][i].first;
               int w = adj[node][i].second;
               
               if(ans[node]!=INT_MIN && ans[u]+w > ans[v]){
                   ans[v] = ans[u]+w;
               }
               
               in[v]--;
               
               if(in[v]==0)q.push(v);
               
           }
            
        }
        
        return ans;
        
    }
};
