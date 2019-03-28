#pragma once
#include <vector>

class Node;
class TreeNode;

// binary search tree
bool isSameVector(const std::vector<int>&, const std::vector<int>&);
void firstOrderTree(const TreeNode* node, std::vector<int>& result);
std::vector<int> treeToVector(const TreeNode* node);
bool isSameTree(TreeNode* p, TreeNode* q); // 100. Same Tree

int minDiffInBST(TreeNode* root); // 783. Minimum Distance Between BST Nodes

TreeNode* increasingBST(TreeNode* root); // 897. Increasing Order Search Tree

// N-ray tree
int maxDepth(Node* root); // 559. Maximum Depth of N-ary Tree