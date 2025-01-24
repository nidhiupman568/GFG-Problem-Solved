class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        //set the slow pointer to the head and fast to the next of head then evert then everything will be sorted

       Node* slow=head;
       Node* fast =head->next;
       
       while(fast!=NULL && fast->next!=NULL){
           slow=slow->next;
            fast=fast->next->next;
           if(slow==fast) return true;
       }
       return false;
    }
};
