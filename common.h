#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
#include <string>
#include <stack>
#include <cctype>

// Micro Define
#define SAFEDELETE_POINTER(ptr) if(ptr!=nullptr) delete ptr;
#define SAFEDELETE_TREE(root) if(root)  delete root;	// todo

// Array
// Array
template<typename Container>
void printArray(Container& c) {
	typename Container::iterator it = c.begin();
	for (; it != c.end(); ++it) {
		std::cout << *it << ' ';
	}
	std::cout << std::endl;
}
// List
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* createList(const std::vector<int>& nums);
void deleteList(ListNode* node);
void printList(const ListNode* node);

// N-ary Tree Node
class Node {
public:
	int val;
	std::vector<Node*> children;
public:
	Node() {}
	Node(int _val, std::vector<Node*> _children) {
		val = _val;
		children = _children;
	}
};

// Binary Tree Node
class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;
public:
	TreeNode();
	~TreeNode();
	TreeNode(int v);
	TreeNode(int v, TreeNode* l, TreeNode* r);
};


// Extra
static const auto __ = []()
{
	std::ios::sync_with_stdio(false);
	// sync_with_stdio(false)是为了打断iostream输入输出到缓存，可以节约很多时间，使之与scanf相差无几。
	std::cin.tie(nullptr);
	// tie是将两个stream板顶的函数，空参数的话返回当前的输出指针，即tie(0)与tie(nullptr)来解决cin与cout的绑定。
	return nullptr;
}();