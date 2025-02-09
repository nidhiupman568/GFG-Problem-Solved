class Solution {
  public:
    // Function to return maximum path sum from any node in a tree.
   pair<int,int> solve(Node *root)
   {
       if(root==NULL)
       return {INT_MIN,0};
       
       pair<int,int> sumleft= solve(root->left);
       pair<int,int> sumright=solve(root->right);
       
       int cursum=max(root->data, root->data + max(sumleft.second, sumright.second));
       
       int golmax=max({sumleft.first, sumright.first, cursum,root->data + sumleft.second + sumright.second});
       
       return {golmax,cursum};
       
       
   }
    int findMaxSum(Node *root) {
        // code here
        return max(solve(root).first,solve(root).second);
   
    }
};
