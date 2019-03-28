#include "common.h"
#include "tag_linkedlist.h"

ListNode* rotateRight(ListNode* head, int k) {
	if (!head || !head->next) return head;
	ListNode* first = head;
	ListNode* last = first;
	int length = 1;
	int keep_k = k;
	while (k > 0) {
		if (first->next) {
			first = first->next;
			length++;
			--k;
		}
		else {
			k = keep_k % length;
			first = last;
		}
	}
	while (first->next) {
		first = first->next;
		last = last->next;
	}
	first->next = head;
	head = last->next;
	last->next = nullptr;
	return head;
}