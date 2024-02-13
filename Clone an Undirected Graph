class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node) {
            return nullptr;
        }

        unordered_map<Node*, Node*> visited;

        return cloneHelper(node, visited);
    }

private:
    Node* cloneHelper(Node* originalNode, unordered_map<Node*, Node*>& visited) {
        if (!originalNode) {
            return nullptr;
        }

        // Check if the node is already visited
        if (visited.find(originalNode) != visited.end()) {
            return visited[originalNode];
        }

        // Create a copy of the current node
        Node* clonedNode = new Node(originalNode->val);

        // Mark the current node as visited
        visited[originalNode] = clonedNode;

        // Recursively clone the neighbors of the current node
        for (Node* neighbor : originalNode->neighbors) {
            clonedNode->neighbors.push_back(cloneHelper(neighbor, visited));
        }

        return clonedNode;
    }
};
