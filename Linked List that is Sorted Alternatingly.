class Solution
{
public:
    void sort(Node **head){
        Node *list1 = *head;
        Node *list2 = nullptr;
        
        while(list1->next != nullptr) {
            Node *temp = list1->next->next;
            list1->next->next = list2;
            list2 = list1->next;
            list1->next = temp;
            list1 = list1->next == nullptr ? list1 : list1->next;
        } 
        
        list1->next = list2;
    }
};
