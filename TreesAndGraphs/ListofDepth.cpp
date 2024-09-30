#include <iostream>
#include <vector>
#include <list>
#include <queue>

struct TreeNode {
   int value;
   TreeNode* left;
   TreeNode* right;

   TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Function to create linked lists of nodes at each depth
std::vector<std::list<TreeNode*>> createLevelLinkedList(TreeNode* root) {
   std::vector<std::list<TreeNode*>> result;
   if (root == nullptr) {
       return result; // Return empty if the tree is empty
   }

   // Queue for breadth-first search
   std::queue<TreeNode*> currentLevel;
   currentLevel.push(root);

   while (!currentLevel.empty()) {
       std::list<TreeNode*> levelList;
       int levelSize = currentLevel.size();

       // Process all nodes at the current level
       for (int i = 0; i < levelSize; i++) {
           TreeNode* node = currentLevel.front();
           currentLevel.pop();
           levelList.push_back(node);

           // Add left and right children to the queue
           if (node->left != nullptr) {
               currentLevel.push(node->left);
           }
           if (node->right != nullptr) {
               currentLevel.push(node->right);
           }
       }
       result.push_back(levelList); // Add the current level list to the result
   }

   return result;
}

// Helper function to print the linked lists
void printLevelLinkedLists(const std::vector<std::list<TreeNode*>>& levelLinkedLists) {
   int depth = 0;
   for (const auto& levelList : levelLinkedLists) {
       std::cout << "Level " << depth << ": ";
       for (const auto& node : levelList) {
           std::cout << node->value << " ";
       }
       std::cout << std::endl;
       depth++;
   }
}

int main() {
   // Example binary tree
   TreeNode* root = new TreeNode(1);
   root->left = new TreeNode(2);
   root->right = new TreeNode(3);
   root->left->left = new TreeNode(4);
   root->left->right = new TreeNode(5);
   root->right->left = new TreeNode(6);
   root->right->right = new TreeNode(7);

   // Create linked lists of nodes at each depth
   std::vector<std::list<TreeNode*>> levelLinkedLists = createLevelLinkedList(root);

   // Print the linked lists
   printLevelLinkedLists(levelLinkedLists);

   return 0;
}
