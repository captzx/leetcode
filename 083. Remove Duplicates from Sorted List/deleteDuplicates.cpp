#include "common.h"
#include "deleteDuplicates.h"

ListNode* deleteDuplicates(ListNode* head) {
	if (!head || !head->next)return head;
	ListNode* curNode = head, *nextNode = head->next;
	while (nextNode) {
		if (nextNode->val == curNode->val) {
			ListNode* tmpNode = nextNode;
			nextNode = nextNode->next;
			curNode->next = nextNode;
			delete tmpNode;
			tmpNode = nullptr;
			continue;
		}
		else {
			nextNode = nextNode->next;
			curNode = curNode->next;
		}
	}
	return head;
}