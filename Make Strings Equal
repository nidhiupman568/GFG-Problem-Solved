class Solution {
  public:
    
    vector<vector<int>> floydWarshall(vector<vector<char>> &transform,vector<int> &cost){
        
        int n = transform.size();
        
        vector<vector<int>> distance(26,vector<int>(26,1e9));
        
        for(int i=0; i<n; i++){
            
            distance[transform[i][0] - 'a'][transform[i][1] - 'a'] = min(cost[i],distance[transform[i][0] - 'a'][transform[i][1] - 'a']);
        }
        
        for(int i=0; i<26; i++){
            
            distance[i][i] = 0;
        }
        
        for(int k=0; k<26; k++){
            
            for(int i=0; i<26; i++){
                
                for(int j=0; j<26; j++){
                    
                    distance[i][j] = min(distance[i][j], distance[i][k] +distance[k][j]);
                }
            }
        }
        
        return distance;
    }
  
    int minCost(string &s, string &t, vector<vector<char>> &transform,
                vector<int> &cost) {
                    
        int n = s.size();
        int m = t.size();
        
        if(n != m) return -1;
        
        int totalCost = 0;
        
        vector<vector<int>> dist = floydWarshall(transform,cost);
        
        for(int i=0; i<n; i++){
            
            if(s[i] == t[i]) continue;
            
            int a = s[i] - 'a';
            int b = t[i] - 'a';
            
            
            long long best = 1e18;
            
            for (int c = 0; c < 26; c++){
                
                if (dist[a][c] < 1e9 && dist[b][c] < 1e9){
                    
                    best = min(best, (long long)dist[a][c] + dist[b][c]);
                }
            }

            if (best == 1e18) return -1;
            
            totalCost += best;
            
        }
        
        return totalCost;
    }
};
