class Solution {
  public:
    int findMaxSum(Node *root) {
        int maxSum = INT_MIN;
        solve(root, maxSum);
        return maxSum;
    }

    private:
        int solve(Node *root, int &maxSum) {
            if (root == nullptr) {
                return 0;
            }
    
            int left = max(0, solve(root->left, maxSum));
            int right = max(0, solve(root->right, maxSum));
    
            maxSum = max(maxSum, left + right + root->data);
    
            return root->data + max(left, right);
        }
};
