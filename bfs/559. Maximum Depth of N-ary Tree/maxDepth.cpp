#include "common.h"
#include "maxDepth.h"

/*
Given a n - ary tree, find its maximum depth.
The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

For example, given a 3 - ary tree :
				1
		3		2		4
	  5   6
We should return its max depth, which is 3.

Note:
The depth of the tree is at most 1000.
The total number of nodes is at most 5000.
*/

int maxDepth(Node* root) {
	if (!root)return 0;
	int depth = 0;
	for (auto node : root->children) {
		depth = std::max(depth, maxDepth(node));
	}
	return depth + 1;
}
//
//int maxDepth2(Node* root) {
//	int depth = 0;
//	std::queue<Node*> Queue;
//	int len;
//	if (root == NULL)
//		return 0;
//	Queue.push(root);
//	while (!Queue.empty()) {
//		len = Queue.size();
//		depth += 1;
//		for (int i = 0; i<len; ++i) {
//			root = Queue.front();
//			Queue.pop();
//			for (int j = 0; j<root->children.size(); ++j) {
//				Queue.push(root->children[j]);
//			}
//		}
//	}
//
//	return depth;
//}
//int maxDepth(Node* root) {
//if (root == NULL)
//return 0;
//
//if (root->children.size() == 0)
//{
//	return 1;
//}
//int maxd = 0;
//for (size_t i = 0; i < root->children.size(); i++)
//{
//	int dep = 1;
//	dep += maxDepth(root->children[i]);
//	if (maxd < dep)
//		maxd = dep;
//}
//
//return  maxd;
//	}