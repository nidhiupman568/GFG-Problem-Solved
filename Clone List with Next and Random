class Solution {
  public:
    Node *cloneLinkedList(Node *head) {
        vector<Node*> nodes;
        
        Node *t = head;
        
        while(t) {
            nodes.push_back(t);
            t = t->next;
        }
        
        int n = nodes.size();
        
        vector<int> random;
        t = head;
        
        while(t) {
            if(t->random == NULL) random.push_back(-1);
            else random.push_back(find(nodes.begin(), nodes.end(), t->random)-nodes.begin());
            
            t = t->next;
        }
        
        Node *ans = new Node(-1);
        Node *nt = ans;
        t = head;
        
        nodes.clear();
        
        while(t) {
            Node *tmp = new Node(t->data);
            nodes.push_back(tmp);
            nt->next = tmp;
            nt = tmp;
            t = t->next;
        }
        
        nt = ans->next;
        int i=0;
        while(nt) {
            nt->random = (random[i]==-1) ? NULL : nodes[random[i]];
            nt = nt->next;
            i++;
        }
        
        return ans->next;
    }
};
