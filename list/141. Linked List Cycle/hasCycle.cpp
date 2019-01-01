#include "common.h"
#include "hasCycle.h"

// leetcode 141.环形链表
// 给定一个链表，判断链表中是否有环。你能否不使用额外空间解决此题
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

