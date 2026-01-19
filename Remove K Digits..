class Solution {
  public:
    string removeKdig(string &s, int k) {
        // code here
        stack<char> st;
        string ans;
        string temp;
        int stringLength = s.length();
        for(int i = 0; i < stringLength; i++) {
            if ((!st.empty()) && (k > 0)) {
                while ((!st.empty()) && k > 0 && st.top() > s[i]) {
                    st.pop();
                    k--;
                }
            }
            st.push(s[i]);
        }
        while ((!st.empty()) && k--) {
            st.pop();
        }
        while (!st.empty()) {
            temp += st.top();
            st.pop();
        }
        if (!temp.size()) {
            return "0";
        }
        
        for (int i = temp.size()-1; i >= 0; i--) {
            if (!ans.size() && temp[i] == '0') {
                continue;
            } else {
                ans += temp[i];
            }
        }
        
        return (ans.size() == 0) ? "0" : ans;
    }
};
