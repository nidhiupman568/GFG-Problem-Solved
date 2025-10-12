class Solution {
  public:
    int moves = 0;

    // Helper DFS function to balance candies
    int dfs(Node* root) {
        if (!root) return 0;

        int left = dfs(root->left);   // candies to move from left subtree
        int right = dfs(root->right); // candies to move from right subtree

        // total moves = moves required in both subtrees
        moves += abs(left) + abs(right);

        // return the net balance of candies for this node
        // (positive => extra candies, negative => needs candies)
        return root->data + left + right - 1;
    }

    int distCandy(Node* root) {
        moves = 0;
        dfs(root);
        return moves;
    }
};
