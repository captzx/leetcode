#include "common.h"

// List
ListNode* createList(const std::vector<int>& nums) {
	if (nums.empty())return nullptr;
	ListNode* curNode = new ListNode(nums[0]);
	ListNode* headNode = curNode;
	for (size_t i = 1; i < nums.size(); ++i) {
		ListNode* newNode = new ListNode(nums[i]);
		curNode->next = newNode;
		curNode = curNode->next;
	}
	return headNode;
}

void deleteList(ListNode* node) {
	while (node != nullptr) {
		ListNode* curNode = node;
		node = node->next;
		delete curNode;		// 直接使用delete[] curNode是来搞笑的吧
	}
}

void printList(const ListNode* node) {
	while (node) {
		std::cout << node->val << ' ';
		node = node->next;
	}
	std::cout << std::endl;
}

// BST Node Implement
TreeNode::TreeNode() :val(NULL), left(nullptr), right(nullptr) {
}

TreeNode::~TreeNode() {
	// delete left & right
}

TreeNode::TreeNode(int v) :val(v), left(nullptr), right(nullptr) {
}

TreeNode::TreeNode(int v, TreeNode* l, TreeNode* r) : val(v), left(l), right(r) {
}




