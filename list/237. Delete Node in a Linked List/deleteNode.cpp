#include "common.h"
#include "deleteNode.h"

void deleteNode(ListNode* node) {
	ListNode* tmpNode = node->next;
	node->val = node->next->val;
	node->next = node->next->next;
	delete tmpNode;
}
