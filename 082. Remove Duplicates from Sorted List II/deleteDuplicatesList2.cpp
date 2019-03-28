#include "common.h"
#include "tag_linkedlist.h"

ListNode*  deleteDuplicatesList2(ListNode* head) {
	if (!head)return head;
	ListNode* curNode = head->next;
	ListNode* tmpNode = head, *prevNode = head;
	while (curNode) {
		while (curNode && curNode->val == tmpNode->val) {
			ListNode* holdCurNode = curNode;
			curNode = curNode->next;
			delete holdCurNode;
		}

		if (tmpNode->next == curNode) {
			if (tmpNode == head) prevNode = head;
			else prevNode = tmpNode;

			tmpNode = curNode;
		}
		else {
			ListNode* holdTmpNode = tmpNode;

			if (tmpNode == head) {
				head = curNode;
				prevNode = head;
				tmpNode = head;
			}
			else {
				prevNode->next = curNode;
				tmpNode = curNode;
			}

			delete holdTmpNode;
		}

		if (curNode)curNode = curNode->next;
	}
	return head;
	// Runtime: 4 ms, faster than 100.00% of C++ online submissions for Remove Duplicates from Sorted List II.
}