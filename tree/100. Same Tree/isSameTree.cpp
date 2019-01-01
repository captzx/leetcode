#include "common.h"
#include "isSameTree.h"

/*
Given two binary trees, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

Example 1:
Input:     1         1
		  / \       / \
		 2   3     2   3

		[1,2,3],   [1,2,3]
Output: true

Example 2:
Input:     1         1
		  /           \
		 2             2

		[1,2],     [1,null,2]
Output: false

Example 3:
Input:     1         1
		  / \       / \
		 2   1     1   2

		[1,2,1],   [1,1,2]
Output: false
*/
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