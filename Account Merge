class DisjointSet{
    public:
	    vector<int> rank,parent;
	    DisjointSet(int n){
	        rank.resize(n+1,0);
	        parent.resize(n+1);
	        for(int i=0;i<=n;i++)parent[i]=i;
	    }
	    int findUpar(int node){
	        if(node==parent[node])return node;
	        return parent[node]=findUpar(parent[node]);
	    }
	    void Unionbyrank(int u,int v){
	        int u_v=findUpar(u);
	        int u_u=findUpar(v);
	        if(u_v==u_u)return;
	        if(rank[u_v]>rank[u_u])parent[u_u]=u_v;
	        else if(rank[u_v]<rank[u_u])parent[u_v]=u_u;
	        else{
	            parent[u_v]=u_u;
	            rank[u_u]++;
	        }
	    }
	};
class Solution{
  public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
        int  n=accounts.size();
        unordered_map<string,int> helper;
        DisjointSet ds(n);
        for(int i=0;i<n;i++){
            for(int j=1;j<accounts[i].size();j++){
                string mail=accounts[i][j];
                if(helper.find(mail)==helper.end())helper[mail]=i;
                else ds.Unionbyrank(i,helper[mail]);
                
            }
        }
        vector<vector<string>> ans;
        vector<string> merged[n];
        for(auto it:helper){
            string mail=it.first;
            int node=ds.findUpar(it.second);
            merged[node].push_back(mail);
        }
        for(int i=0;i<n;i++){
            if(merged[i].size()==0)continue;
            sort(merged[i].begin(),merged[i].end());
            vector<string> temp;
            temp.push_back(accounts[i][0]);
            for(auto it:merged[i]){
                temp.push_back(it);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
