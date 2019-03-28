#include "common.h"
#include "tag_linkedlist.h"

bool isPalindrome(ListNode* head) {
	if (!head)return true;
	int length = 0;
	ListNode* curNode = head;
	while (curNode) {
		++length;
		curNode = curNode->next;
	}
	if (length == 1)return true;
	int palindromePos = length % 2 == 0 ? length / 2 : length / 2 + 1;
	curNode = head;
	for (int i = 0; i < palindromePos; ++i) {
		curNode = curNode->next;
	}
	ListNode* prevNode = nullptr;
	while (curNode) {
		ListNode* tmpNode = curNode->next ? curNode->next : nullptr;
		curNode->next = prevNode;
		prevNode = curNode;
		curNode = tmpNode;
	}
	ListNode* headNode = head;
	while (prevNode) {
		if (prevNode->val != headNode->val)return false;
		prevNode = prevNode->next;
		headNode = headNode->next;
	}
	return true;
}