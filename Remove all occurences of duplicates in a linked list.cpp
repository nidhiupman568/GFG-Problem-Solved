class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        if(!head){
            return nullptr;
        }
        Node*temp=head;
       // Node *prev=nullptr;
        unordered_map<int,int>mp;
        while(temp!=nullptr){
            int x=temp->data;
            mp[x]++;
            temp=temp->next;
        }
        Node dummy(0);
        Node* newptr = &dummy;
         temp = head;
        while (temp != nullptr) {
            if (mp[temp->data] == 1) {
                newptr->next = new Node(temp->data);
                newptr = newptr->next;
            }
            temp = temp->next;
        }
       
        return dummy.next;
    
    }
};
