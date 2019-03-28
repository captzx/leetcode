#include "common.h"
#include "tag_tree.h"


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