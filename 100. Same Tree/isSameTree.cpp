#include "common.h"
#include "tag_tree.h"

bool isSameTree(TreeNode* p, TreeNode* q) {
	return isSameVector(treeToVector(p),treeToVector(q));
}

bool isSameVector(const std::vector<int>& p, const std::vector<int>& q) {
	if (p.size() != q.size())return false;
	for (size_t i = 0; i < p.size(); ++i) {
		if (p[i] != q[i])return false;
	}
	return true;
}

std::vector<int> treeToVector(const TreeNode* node) {
	std::vector<int> result;
	firstOrderTree(node, result);
	return result;
}

void firstOrderTree(const TreeNode* node, std::vector<int>& result) {
	if (!node) {
		result.push_back(node->val);
		return;
	}
	firstOrderTree(node->left, result);
	firstOrderTree(node->right, result);
}