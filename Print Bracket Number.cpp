class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        stack<int>st;
        vector<int>ans;
        int brNo = 1;
        for(int i = 0 ; i < str.size() ; i++){
            if(str[i] == '('){
                st.push(brNo);
                ans.push_back(brNo);
                brNo++;
            }
            else if(str[i] == ')'){
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};
