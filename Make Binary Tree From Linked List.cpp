class Solution 
{
  public:
    void convert(Node *head, TreeNode *&root) 
    {
        if(head == NULL)
            return;

        root = new TreeNode(head->data);
        queue<TreeNode*> q;
        q.push(root);
        
        while(head->next)
        {
            TreeNode* curr = q.front();
            q.pop();
            
            head = head->next;
            if(head == nullptr) return;
            curr->left = new TreeNode(head->data);
            
            head = head->next;
            if(head == nullptr) return;
            curr->right = new TreeNode(head->data);
            
            q.push(curr->right);
        }
    }
};
