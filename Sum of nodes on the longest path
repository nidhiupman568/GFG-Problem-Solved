class Solution {
  public:
  int longroot=0;
  void Solve(int &ans,Node* root,int sum,int idx){
      if(root==NULL){
          if(idx==longroot)
          ans=max(ans,sum);
          else if(idx>longroot)
          ans=sum,longroot=idx;
        return;  
      }
      Solve(ans,root->left,sum+root->data,idx+1);
      Solve(ans,root->right,sum+root->data,idx+1);
  }
    int sumOfLongRootToLeafPath(Node *root) {
       
       int ans=0;
       Solve(ans,root,0,0);
       return ans;
    }
};
