#include "common.h"
#include "tag_linkedlist.h"

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
	if (!l1)return l2;
	if (!l2)return l1;
	ListNode* curNode = nullptr, *resultList = nullptr;
	while (l1&&l2) {
		if (l1->val <= l2->val) {		// 比较
			if (resultList) {
				curNode->next = l1;
				curNode = curNode->next;
			}
			else {
				curNode = l1;
				resultList = l1;
			}
			l1 = l1->next;
		}
		else {
			if (resultList) {
				curNode->next = l2;
				curNode = curNode->next;
			}
			else {
				curNode = l2;
				resultList = l2;
			}
			l2 = l2->next;
		}
	}
	if (l1)curNode->next = l1;
	if (l2)curNode->next = l2;
	return resultList;
}

ListNode* mergeTwoLists2(ListNode* l1, ListNode* l2) {
	if (!l1)return l2;
	if (!l2)return l1;
	ListNode* returnNode = nullptr;
	if (l1->val <= l2->val) {
		returnNode = l1;	// 入栈保存将要返回的节点
		returnNode->next = mergeTwoLists2(l1->next, l2);
	}
	else {
		returnNode = l2;
		returnNode->next = mergeTwoLists2(l1, l2->next);
	}
	return returnNode;		// 出栈输出保存的节点
}