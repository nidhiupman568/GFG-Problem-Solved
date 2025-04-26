class Solution {
  public:
    bool isHeap(Node* tree) {
       int totalNodes = countNodes(tree);
        return isComplete(tree, 0, totalNodes) && checkHeap(tree);
    }
    int countNodes(Node* root) {
        if (!root) return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
    
    bool isComplete(Node* root, int index, int totalNodes) {
        if (!root) return true;
        if (index >= totalNodes) return false;
        return isComplete(root->left, 2 * index + 1, totalNodes) && isComplete(root->right, 2 * index + 2, totalNodes);
    }
    
    bool checkHeap(Node* root) {
        if (!root->left && !root->right) return true;
        if (!root->right) return root->data >= root->left->data && checkHeap(root->left);
        return root->data >= root->left->data && root->data >= root->right->data && checkHeap(root->left) && checkHeap(root->right);
    }
};
