class Solution {
  public:
    
    int DFS(int value,vector<int> &b,vector<bool> &visited){
        
        if(visited[value])return 0;
        visited[value] = 1;
        return 1 + DFS(b[value-1],b,visited);
        
    }
    
    int minOperations(vector<int> &b) {
        // code here
        int n = b.size();
        long long ans = 1;
        int mod = 1e9 + 7;
        vector<bool>visited(n+1,0);
        
        
        for(int i=0;i<n;i++){
            
            if(!visited[b[i]]){
                int lenght = DFS(b[i],b,visited);
                ans = lcm(ans,lenght);
            }
        }
        
        
        return ans%mod;
        
    }
};
