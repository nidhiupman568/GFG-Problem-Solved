class Solution{
  public:
    bool isDeadEnd(Node *root)
    {
        //Your code here
        queue<Node*>q;
        vector<int>leaf;
        vector<int>visited;
        q.push(root);
        
        while(!q.empty()){
            Node* node=q.front();
            visited.push_back(node->data);
            q.pop();
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
            if(node->left==NULL && node->right==NULL)leaf.push_back(node->data);
        }
        
        int n=leaf.size();
        for(int i=0;i<n;i++){
            if((leaf[i]==1 && find(visited.begin(),visited.end(),2)!=visited.end())||(find(visited.begin(),visited.end(),leaf[i]-1)!=visited.end() && find(visited.begin(),visited.end(),leaf[i]+1)!=visited.end()))
                return true;
        }
        
        return false;
        
    }
};
