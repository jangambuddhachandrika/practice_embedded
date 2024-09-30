/*
* MinimumHeight.cpp
*
*  Created on: Sep 22, 2024
*      Author: JANGCHA
*/

#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int v):val(v),left(nullptr),right(nullptr){}

};

TreeNode* MinimumHeight(const vector<int>&arr,int start,int end)
{
	if(start>end)
	{
		return nullptr;
	}
	int mid = (start+end)/2;
	TreeNode* node = new TreeNode(arr[mid]);
	node->left = MinimumHeight(arr,start,mid-1);
	node->right = MinimumHeight(arr,mid+1,end);
	return node;
}
TreeNode* createMinimalBST(const vector<int>& arr) {
   return MinimumHeight(arr, 0, arr.size() - 1);
}
// In-order traversal to print the tree
void inOrderTraversal(TreeNode* node) {
   if (node == nullptr) {
       return;
   }
   inOrderTraversal(node->left);
   std::cout << node->val << " ";
   inOrderTraversal(node->right);
}

int main() {
   std::vector<int> sortedArray = {1, 2, 3, 4, 5, 6, 7};

   TreeNode* root = createMinimalBST(sortedArray);

   std::cout << "In-order traversal of the created BST: ";
   inOrderTraversal(root);

   return 0;
}


