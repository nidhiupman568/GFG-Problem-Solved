class Solution
{
    public:
    
    int position(int in[], int inStart, int inEnd, int val){
        for(int i=inStart; i<=inEnd; i++){
            if(in[i]==val)
            return i;
        }
        return -1;
    }
    Node *tree(int in[], int post[], int &postind, int inStart, int inEnd){
        if(postind<0 || inStart>inEnd)
        return NULL;
        
        int val=post[postind--];
        Node *node=new Node(val);
        
        int pos=position(in, inStart, inEnd, val);
        
        node->right=tree(in, post, postind, pos+1, inEnd);
        node->left=tree(in, post, postind, inStart, pos-1);
        
        return node;
        
        
    }
    //Function to return a tree created from postorder and inoreder traversals.
    Node *buildTree(int in[], int post[], int n) {
        // Your code here
        int postind=n-1;
        Node *ans=tree(in, post, postind, 0, n-1);
        return ans;
    }
};
