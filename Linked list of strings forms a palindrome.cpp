class Solution {
public:
    bool compute(Node* head) {
        string s;
        while (head) {
            s += head->data;
            head = head->next;
        }
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l] != s[r])
                return 0;
            l++;
            r--;
        }
        return 1;
    }
};
