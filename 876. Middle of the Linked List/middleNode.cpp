#include "common.h"
#include "middleNode.h"

ListNode* middleNode(ListNode* head) {
	ListNode* rearNode = head;
	ListNode* frontNode = head;
	int counter = 1;	// 若中间点有两个，取定前者则设counter为0，取后者设counter为1，此处取后者
	while (frontNode) {
		if (counter % 2 == 0) rearNode = rearNode->next;
		frontNode = frontNode->next;
		++counter;
	}
	return rearNode;
}