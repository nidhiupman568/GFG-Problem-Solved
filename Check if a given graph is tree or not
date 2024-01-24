class Solution {
public:
    bool dfs(vector<int> adj[], vector<bool>& vis, int u, int par) {
        vis[u] = true;
        for (int v : adj[u]) {
            if (v == par) continue;
            if (vis[v] == true) return true;
            if (dfs(adj, vis, v, u)) return true;
        }
        return false;
    }

    bool isTree(int n, int m, vector<vector<int>>& adj) {
        vector<int> Adj[n];
        vector<bool> vis(n, false);
        bool flag = false;
        int val = -1;

        for (int i = 0; i < m; i++) {
            int a = adj[i][0];
            int b = adj[i][1];
            Adj[a].push_back(b);
            Adj[b].push_back(a);
        }
int count=0;
        for (int i = 0; i < n; i++) {
            if (!vis[i] ) {
              if(dfs(Adj, vis, i, val))
                flag = true;
                 count++;
            }
           
        }
        if(count>1) return false;
        
        return !flag ;
    }
};
