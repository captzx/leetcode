#include "common.h"
#include "tag_linkedlist.h"

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode* curNode = nullptr;
	ListNode* headNode = nullptr;		// 头结点
	int c = 0;							// 进位
	while (l1 != nullptr || l2 != nullptr) {
		int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + c;
		ListNode* newNode = new ListNode(sum % 10);
		c = sum / 10;
		if (headNode != nullptr)curNode->next = newNode;
		else  headNode = newNode;
		curNode = newNode;
		if(l1)l1 = l1->next;
		if(l2)l2 = l2->next;
	}
	if (c == 1)curNode->next = new ListNode(c);
	return headNode;
}