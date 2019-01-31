#include "common.h"
#include "minDiffInBST.h"

int result = INT_MAX, preNodeValue = -1;
int minDiffInBST(TreeNode* root) {
	if(root->left) minDiffInBST(root->left);
	if (preNodeValue >= 0) result = std::min(result, root->val - preNodeValue);
	preNodeValue = root->val;
	if (root->right) minDiffInBST(root->right);
	return result;
}