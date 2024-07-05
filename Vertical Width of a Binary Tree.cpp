class Solution {
  public:
    // Function to find the vertical width of a Binary Tree.
    int verticalWidth(Node* root) {
        if (root == nullptr) return 0;
        
        queue<pair<Node*, int>> q;
        map<int, int> mp;
        q.push({root, 0});
        
        while (!q.empty()) {
            Node* node = q.front().first;
            int line = q.front().second;
            q.pop();
            
            mp[line] = 1;
            
            if (node->left != nullptr) q.push({node->left, line - 1});
            if (node->right != nullptr) q.push({node->right, line + 1});
        }
        
        return mp.size();
    }
};
