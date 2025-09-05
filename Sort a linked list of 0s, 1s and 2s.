class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        if(head==NULL) return head;
        Node* curr=head;
        int cntZero=0,cntOne=0,cntTwo=0;
        
        while(curr!=NULL){
            if(curr->data==0) cntZero++;
            if(curr->data==1) cntOne++;
            curr=curr->next;
        }
        
        curr=head;
        while(curr){
            if(cntZero>0) {
                curr->data=0;
                cntZero--;
                }
            else if(cntOne>0){
                curr->data=1;
                cntOne--;
            }
            else{
                curr->data=2;
            }
            curr=curr->next;
        }
        return head;
    }
};
