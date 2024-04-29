class Solution {
    public:
    Node* deleteK(Node *head,int K){
      if(K==1) return NULL;
      int k=1;
      Node* t=head;
      while(t!=NULL && t->next!=NULL && k++)
          if(k==K) {t->next=t->next->next;t=t->next;k=1;}
          else t=t->next;
      return head;
    }
};
