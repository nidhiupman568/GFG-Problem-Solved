class Solution {
  public:
    int countPaths(vector<vector<int>>& e, int v, int s, int d) {
        // Code here
        vector<vector<int>>adj(v);
        vector<int>in(v , 0);
        for(auto it : e){
            adj[it[0]].push_back(it[1]);
            in[it[1]]++;
        }
        queue<int>q;
        for(int i = 0 ; i<v ; i++){
            if(in[i] == 0){
                q.push(i);
            }
        }
        vector<int>topo;
        while(!q.empty()){
            auto it = q.front(); q.pop();
            topo.push_back(it);
            
            for(auto it2 : adj[it]){
                in[it2]--;
                if(in[it2] == 0) q.push(it2);
            }
        }
        vector<int>dist(v , 0);
        dist[s] = 1;
        for(auto it : topo){
            for(auto it2 : adj[it]){
                dist[it2] += dist[it];
            }
        }
        return dist[d];
    }
};
