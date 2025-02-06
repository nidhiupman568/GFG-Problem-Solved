class Solution {
  public:
  int idx=0;
  Node* Solve(vector<int>&inorder,vector<int>&preorder,int s,int e){
      if(s>e)
      return NULL;
      Node* root=new Node(preorder[idx++]);
      int k;
      for(int l=s;l<=e;l++){
          if(inorder[l]==root->data){
              k=l;
              break;
          }
      }
      root->left=Solve(inorder,preorder,s,k-1);
      root->right=Solve(inorder,preorder,k+1,e);
      return root;
  }
    // Function to build the tree from given inorder and preorder traversals
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
       return Solve(inorder,preorder,0,inorder.size()-1);
    }
};
