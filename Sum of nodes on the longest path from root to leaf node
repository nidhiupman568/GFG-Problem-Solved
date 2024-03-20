class Solution
{
public:
    pair<int,int> dfs(Node* root)
    {
        if(!root)
            return {0,0};
            
        pair<int,int> Left = dfs(root->left);
        pair<int,int> Right = dfs(root->right);
        
        if(Left.first > Right.first)
            return {Left.first+1, Left.second+root->data};
        
        else if(Left.first < Right.first)
            return {Right.first+1, Right.second+root->data};
        
        else
            return {Left.first+1, max(Left.second, Right.second)+root->data};
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        pair<int,int> ans = dfs(root);
        
        return ans.second;
    }
};
