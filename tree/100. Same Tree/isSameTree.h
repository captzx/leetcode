#pragma once

bool isSameVector(const std::vector<int>&, const std::vector<int>&);
void firstOrderTree(const TreeNode* node, std::vector<int>& result);
std::vector<int> treeToVector(const TreeNode* node);
bool isSameTree(TreeNode* p, TreeNode* q);