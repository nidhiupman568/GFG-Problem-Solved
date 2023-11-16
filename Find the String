class Solution
{
public:
    string findString(int n, int k) {
        set<string> vis;
        
        string start = "";
        for(int i = 0; i < n; i++)
            start += '0';
        
        string ans = start;
        
        function<void(string &)> dfs = [&](string &node) {
            vis.insert(node);
            string nextS = node.substr(1);
            
            for(int i = k - 1; i > -1; i--){
                string child = nextS + to_string(i);
                
                if(!vis.count(child)){
                    ans += to_string(i);
                    dfs(child);
                }
            }
        };
        
        dfs(start);
        
        return ans;
    }
};
