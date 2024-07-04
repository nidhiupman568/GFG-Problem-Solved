class Solution {
  public:
    string serialize(Node* root, unordered_map<string, int>& subtreeMap, vector<Node*>& duplicates) {
        if (root == NULL) return "#";  // Use '#' to represent null nodes

        // Serialize left and right subtrees
        string left = serialize(root->left, subtreeMap, duplicates);
        string right = serialize(root->right, subtreeMap, duplicates);

        // Create the current subtree's serialized string
        string subtree = to_string(root->data) + "," + left + "," + right;

        // Track the frequency of the current subtree
        subtreeMap[subtree]++;

        // If the current subtree is seen exactly twice, add the root to the duplicates
        if (subtreeMap[subtree] == 2) {
            duplicates.push_back(root);
        }

        return subtree;
    }

    vector<Node*> printAllDups(Node* root) {
        vector<Node*> duplicates;
        unordered_map<string, int> subtreeMap;
        serialize(root, subtreeMap, duplicates);
        return duplicates;
    }
};
