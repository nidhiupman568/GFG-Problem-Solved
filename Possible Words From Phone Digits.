class Solution {
  public:
    map<int, string> m {{2,"abc"}, {3,"def"}, {4,"ghi"}, {5,"jkl"}, {6,"mno"}, {7,"pqrs"}, {8,"tuv"}, {9,"wxyz"}};

    void fun(int i, int n, string s, vector<int> &v, vector<string> &ans) {
        if(i==n) {
            ans.push_back(s);
            return;
        }    
        if(v[i]==0 || v[i]==1) return fun(i+1, n, s, v, ans);
        
        for(int j=0; j<m[v[i]].size(); j++) 
            fun(i+1, n, s+m[v[i]][j], v, ans);
    }
    
    vector<string> possibleWords(vector<int> &v) {
        int n = v.size();
        vector<string> ans;
        fun(0, n, "", v, ans);
        return ans;
    }
};
