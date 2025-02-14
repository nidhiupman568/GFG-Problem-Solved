class Solution {
  public:
    void correctBST(Node* root) {
        // add code here.
        vector<Node*> vec;
        Node* temp1=nullptr, *temp2=nullptr;
        int i,j;
        inorder(root, vec);
        for(i=0; i<vec.size(); i++){
            if(vec[i]->data>vec[i+1]->data){
                temp1=vec[i];
                break;
            }
        }
        for(j=vec.size()-1; j>=0; j--){
            if(vec[j]->data<vec[j-1]->data){
                temp2=vec[j];
                break;
            }
        }
        if(temp1 && temp2) swap(temp1, temp2);
    }
    void inorder(Node* node, vector<Node*>& vec){
        if(node==nullptr) return;
        inorder(node->left, vec);
        vec.push_back(node);
        inorder(node->right, vec);
    }
    void swap(Node* temp1, Node* temp2){
        int temp;
        temp=temp1->data;
        temp1->data=temp2->data;
        temp2->data=temp;
    }
};
