/* Structre of the Node of the Binary Tree is as follows
struct Node
{
        int data;
        struct Node *left, *right;
};
*/
// your task is to complete this function
// function should create a new binary tree
// function should return the root node to the 
// new binary tree formed
class Solution{
  public:
    Node* construct(int pre[], int i, int preMirror[], int j, int size) {
        Node *root = new Node(pre[i]);
        int size_ = size / 2;
        if (size_ > 0) {
            root->left = construct(pre, i + 1, preMirror, i + size_ + 1, size_);
            root->right = construct(pre, i + size_ + 1, preMirror, i + 1, size_);
        }
        return root;
    }
    
    Node* constructBinaryTree(int pre[], int preMirror[], int size)
    {
        // Code here
        return construct(pre, 0, preMirror, 0, size);
    }
};
