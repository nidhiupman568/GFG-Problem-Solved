class Solution {
  public:
    int getMaxArea(vector<int> &arr) {
        int n = arr.size();
        stack<int> st;
        int ans = 0;
        for(int i = 0;i<=n;i++){
            while(!st.empty() and (i==n or arr[i]<arr[st.top()])){
                int idx = st.top();
                st.pop();
            
                int l_idx  = (!st.empty()) ? st.top():-1;
                int r_idx = i;
                
                ans = max(ans, arr[idx]*(r_idx-l_idx-1));
            }
            st.push(i);
        }
        
        return ans;
    }
    int maxArea(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(i-1>=0 and mat[i][j] == 1){
                    mat[i][j] += mat[i-1][j];
                }
            }
            ans = max(ans, getMaxArea(mat[i]));
        }
        
        return ans;
    }
};
