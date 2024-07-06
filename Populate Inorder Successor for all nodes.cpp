class Solution {
  public:
    
    void inorder(Node *root,Node **node)
    {
        if(root->left) inorder(root->left,node);
        ((*node)->next) = root;
        *node = root;
        if(root->right) inorder(root->right,node);
        
    
    }
    void populateNext(Node *root) {
        Node *node = new Node(-1);
        if(root==NULL) return;
        inorder(root,&node);
        
        }
};
