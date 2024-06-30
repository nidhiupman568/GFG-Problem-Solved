class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // Your code here
       int pos=1;
       Node *curr=head;
       if(x==1) return head->next;
       while(pos!=x){
           pos++;
           curr=curr->next;
       }
      if(curr->next!=NULL){
          curr->next->prev=curr->prev;
      }
      if(curr->prev!=NULL){
          
      }
      curr->prev->next=curr->next;
      return head;
    }
};
