#include "common.h"
#include "tag_linkedlist.h"

ListNode* reverseList(ListNode* head) {
	if (!head || !head->next)return head;
	ListNode *nextNode = head, *curNode = nullptr;
	while (nextNode) {
		ListNode* tmpNode = nullptr;
		if (nextNode->next)tmpNode = nextNode->next; // 额外的节点保存被扯断指针的下一个节点
		nextNode->next = curNode;
		curNode = nextNode;
		nextNode = tmpNode;
	}
	return curNode;
}

ListNode* reverseList2(ListNode* head) {
	if (!head || !head->next)return head;
	ListNode* nextNode = head;
	head = reverseList2(nextNode->next);
	nextNode->next->next = nextNode;
	nextNode->next = nullptr;
	return head;
}