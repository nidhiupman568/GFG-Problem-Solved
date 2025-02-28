class Solution {
  public:
    int evaluate(vector<string>& arr) {
        // code here
        stack<int> st;
        for (const string& token : arr) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                // Pop the top two operands
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                
                // Perform the operation
                if (token == "+") st.push(a + b);
                else if (token == "-") st.push(a - b);
                else if (token == "*") st.push(a * b);
                else if (token == "/") st.push(a / b); // Division rounds towards zero
            } else {
                // Push the operand onto the stack
                st.push(stoi(token));
            }
        }
        
        // The result will be the only element in the stack
        return st.top();
    
    }
};
