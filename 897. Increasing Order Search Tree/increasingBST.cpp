#include "common.h"
#include "increasingBST.h"

TreeNode* resultNode = nullptr;
TreeNode* resultNode2 = nullptr;
TreeNode* increasingBST(TreeNode* root) {
	if (root->left) increasingBST(root->left);
	if (!resultNode) {
		resultNode = root;
		resultNode2 = resultNode;
	}
	else {
		resultNode->left = nullptr;
		resultNode->right = root;
		resultNode = resultNode->right;
	}
	if (root->right) increasingBST(root->right);
	return resultNode2;
}