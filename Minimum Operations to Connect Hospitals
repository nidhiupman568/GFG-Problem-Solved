class Solution {
  public:
    vector<vector<int>> ConstructAdj(int V, vector<vector<int>>& edges){
        vector<vector<int>> adj(V);
        for(int i = 0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        return adj;
    }
    void dfs(int node, vector<vector<int>>& adj, vector<bool> &vis)
    {
        if(vis[node])return;
        vis[node]=true;
        for(int &neigh: adj[node]){
            dfs(neigh, adj, vis);
        }
    }
    int minConnect(int V, vector<vector<int>>& edges) {
        if(edges.size()<(V-1))return -1;
        
        vector<bool> vis(V, false);
        vector<vector<int>> adj = ConstructAdj(V, edges);
        int cnt_comp = 0;
        for(int node = 0;node<V;node++){
            if(!vis[node]){
                dfs(node, adj, vis);
                cnt_comp++;
            }
        }
        
        return cnt_comp-1;
    }
};
