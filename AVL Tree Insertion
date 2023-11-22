class Solution{
  public:
  
    int height(Node* N){
        if(N==NULL){
            return 0;
        }
        return N->height;
    }
    
    int getBalance(Node* N){
        if(N==NULL){
            return 0;
        }
        return height(N->left)-height(N->right);
    }
    
    Node* leftRotation(Node* x){
        Node* y = x->right;
        Node* T2 = y->left;
        
        y->left = x;
        x->right = T2;
        
        x->height = 1+max(height(x->left),height(x->right));
        y->height = 1+max(height(y->left),height(y->right));
        
        return y;
    }
    
    Node* rightRotation(Node* x){
        Node* y = x->left;
        Node* T2 = y->right;
        
        y->right = x;
        x->left = T2;
        
        x->height = 1+max(height(x->left),height(x->right));
        y->height = 1+max(height(y->left),height(y->right));
        
        return y;
    }
    
    /*You are required to complete this method */
    Node* insertToAVL(Node* node, int data)
    {
        if(node==NULL){
            return new Node(data);
        }else if(data > node->data){
            node->right = insertToAVL(node->right,data);
        }else if(data < node->data){
            node->left = insertToAVL(node->left,data);
        }else{
            return node;
        }
        
        node->height = 1+max(height(node->left),height(node->right));
        
        int balance = getBalance(node);
        
        if(balance>1 && data < node->left->data){
            return rightRotation(node);
        }
        if(balance<-1 && data>node->right->data){
            return leftRotation(node);
        }
        if(balance>1 && data>node->left->data){
            node->left = leftRotation(node->left);
            return rightRotation(node);
        }
        if(balance<-1 && data<node->right->data){
            node->right = rightRotation(node->right);
            return leftRotation(node);
        }
        return node;
    }
};
