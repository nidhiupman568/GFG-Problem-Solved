class Solution {
  public:
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        vector<int>a, b;
        
        while (head1) {
            a.push_back(head1->data);
            head1 = head1->next;
        }
        while (head2) {
            b.push_back(head2->data);
            head2 = head2->next;
        }
        
        int i = a.size() -  1;
        int j = b.size() - 1;
        int carry = 0;

        Node* result =NULL;

       
        while (i >= 0||j >= 0 ||carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--];
            if (j >= 0) sum += b[j--];

            carry = sum /10;
            int digit = sum % 10;


            Node* newNode = new Node(digit);
            newNode->next = result;
            result = newNode;
        }

       
        while (result && result->data == 0 && result->next) {
            result = result->next;
        }

        return result;
    }
};
