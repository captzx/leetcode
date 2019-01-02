#include "common.h"
#include "deleteDuplicates.h"

// leetcode 83.删除所有重复的元素
// 给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。例如：输入: 1->1->2 输出: 1->2
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