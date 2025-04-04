class Solution {
  public:
    bool dfs(int i, int p, vector<vector<int>>&ed, vector<bool>&vis){
        if(vis[i] == true) return true;
        
        vis[i] = true;
        bool ok = false;
        for(int j : ed[i]){
            if(j == p) continue;
            
            ok = ok | dfs(j, i, ed, vis);
        }
        return ok;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<bool>vis(V, false);
        for(int i = 0; i < V; i++){
            if(vis[i] == true) continue;
            
            if(dfs(i,-1, edges, vis)) return true;
        }
        return false;
    }
};
