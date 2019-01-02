#include "common.h"
#include "minDiffInBST.h"

/*
Given a Binary Search Tree (BST) with the root node root, return the minimum difference between the values of any two different nodes in the tree.

Example :
Input: root = [4,2,6,1,3,null,null]
Output: 1
Explanation:
Note that root is a TreeNode object, not an array.

The given tree [4,2,6,1,3,null,null] is represented by the following diagram:

		4
	   / \
	  2   6
	 / \
    1   3

while the minimum difference in this tree is 1, it occurs between node 1 and node 2, also between node 3 and node 2.
*/

int result = INT_MAX, preNodeValue = -1;
int minDiffInBST(TreeNode* root) {
	if(root->left) minDiffInBST(root->left);
	if (preNodeValue >= 0) result = std::min(result, root->val - preNodeValue);
	preNodeValue = root->val;
	if (root->right) minDiffInBST(root->right);
	return result;
}