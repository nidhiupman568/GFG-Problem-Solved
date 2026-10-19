class Solution {
  public:
    int count=0;
    void dfs(unordered_map<int,vector<int>>&graph,int node){
        count++;
        for(int i:graph[node]){
            dfs(graph,i);
        }
        return;
    }
    int goodIndices(vector<int> &arr) {
        // code here
        //we need to eleminate the cycles
        //consider each one as node
        //then cycle topo sort to get the non cycle indexes
        //from outside to inside which index can be visited they are safe like evental 
        //safe state
        //reverse the edges
        //adj list
        count=0;
        int n=arr.size();
        vector<int>adj(n);
        unordered_map<int,vector<int>>graph;
        for(int i=0;i<n;i++){
            adj[i]=(arr[i]+i>=n or arr[i]+i<0)?n:arr[i]+i;
            
        }
        //formed the edges reverse the edge list
        for(int i=0;i<n;i++){
            graph[adj[i]].push_back(i);
        }
        //from the outer node how many are reachble nodes no need of visted as 
        //dag from the node n only needed
        dfs(graph,n);
        
        return count-1;
        
        
        
    
    }
};
