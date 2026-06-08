class Solution {
  public:
    Node *compute(Node *head) {
        // code here
        vector<int> helper;
        
        stack<int> st;
        
        Node* temp = new Node(-1);
        Node *temp1 = temp;

        while (head) {
            helper.push_back(head->data);
            head = head->next;
        }
        
        int n = helper.size();
        
        vector<int> computeHelper(n);
        
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= helper[i]) {
                st.pop();
            }
            
            if (st.empty()) {
                computeHelper[i] = -1;
            } else {
                computeHelper[i] = st.top();
            }
            
            st.push(helper[i]);
        }
        
        for (int i = 0; i < computeHelper.size(); i++) {
            if (computeHelper[i] == -1) {
                Node* temp2 = new Node(helper[i]);
                temp->next = temp2;
                temp = temp2;
            }
        }
        
        return temp1->next;
    }
};
