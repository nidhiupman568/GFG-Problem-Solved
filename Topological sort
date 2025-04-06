class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<int>ans;
        
        vector<int>deg(V + 1, 0);
        vector<vector<int>>graf(V);
        for(auto i : edges){
            graf[i[0]].push_back(i[1]);
            deg[i[1]]++;
        }
        queue<int>q;
        for(int i = 0; i < V; i++){
            if(deg[i] == 0){
                q.push(i);
                ans.push_back(i);
                deg[i] = -1;
            }
        }
        while(!q.empty()){
            int f = q.front();
            q.pop();
            
            for(auto i : graf[f]){
                deg[i]--;
                
                if(deg[i] == 0){
                    deg[i] = -1;
                    q.push(i);
                    ans.push_back(i);
                }
            }
        }
        return ans;
    }
};
