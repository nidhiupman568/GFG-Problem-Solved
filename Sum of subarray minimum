class Solution {
  public:
    int sumSubMins(vector<int> &arr) {
        // code here
        int n= arr.size();
        
        vector<int> left(n, -1);
        vector<int> right(n, -1);
        
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            left[i] = st.empty()?i+1 : i-st.top();
            st.push(i);
        }
        
        stack<int> st1;
        for(int i=n-1;i>=0;i--){
            while(!st1.empty() && arr[st1.top()]>arr[i]){
                st1.pop();
            }
            right[i] = st1.empty()?n-i : st1.top()-i;
            st1.push(i);
        }
        
        int sum = 0;
        
        for(int i=0;i<n;i++){
            sum += (arr[i]*left[i]*right[i]);
        }
        return sum;
    }
};
