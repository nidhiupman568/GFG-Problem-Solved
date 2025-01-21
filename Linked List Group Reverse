class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        if(!head || !head->next) return head;

        Node *prev = NULL;
        Node *curr = head;
        
        int it = 0;
        while(curr && it < k){
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            it++;
        }
        
        
        head->next = reverseKGroup(curr,k);
        return prev;
    }
};
