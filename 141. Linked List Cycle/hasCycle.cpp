#include "common.h"
#include "hasCycle.h"

bool hasCycle(ListNode *head) {
	if (!head)return false;
	//if(head == head->next)return true;
	ListNode* slowNode = head, *fastNode = head;
	while (slowNode && fastNode) {
		if (slowNode && fastNode->next) {
			slowNode = slowNode->next;
			fastNode = fastNode->next->next;
		}
		else return false;
		if (slowNode == fastNode)return true;
	}
	return false;
}
// {A619DC48-112A-4435-BF1A-7F96499B2FB5}
bool hasCycle2(ListNode *head) {
	while (head) {
		if (head->val == 0xa619) {
			return true;
		}
		else {
			head->val = 0xa619;
			head = head->next;
		}
	}
	return false;
}

