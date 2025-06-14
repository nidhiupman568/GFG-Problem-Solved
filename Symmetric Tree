class Solution {
  public:
    bool solve(Node* l,Node* r){
        if(l==NULL && r==NULL)return false;
        if(l==NULL || r==NULL || l->data!=r->data)return true;
        
        
        if(solve(l->left,r->right))return true;
        if(solve(l->right,r->left))return true;
        return false;
    }
    bool isSymmetric(Node* root) {
        // Code here
      return !solve(root->left,root->right);  
    }
};
