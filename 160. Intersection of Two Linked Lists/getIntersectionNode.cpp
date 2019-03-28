#include "common.h"
#include "tag_linkedlist.h"

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
	ListNode* curANode = headA, *curBNode = headB;
	int lengthA = 0, lengthB = 0;
	while (curANode) {
		curANode = curANode->next;
		++lengthA;
	}
	while (curBNode) {
		curBNode = curBNode->next;
		++lengthB;
	}
	curANode = headA;
	curBNode = headB;
	while (lengthA > lengthB) {
		curANode = curANode->next;
		--lengthA;
	}
	while (lengthA < lengthB) {
		curBNode = curBNode->next;
		--lengthB;
	}
	while (curANode && curBNode) {
		if (curANode == curBNode)return curANode;
		curANode = curANode->next;
		curBNode = curBNode->next;
	}
	return nullptr;
}


ListNode *getIntersectionNode2(ListNode *headA, ListNode *headB) {
	ListNode* curANode = headA, *curBNode = headB;
	bool flagA = true, flagB = true;
	while (curANode && curBNode) {
		if (curANode == curBNode)return curANode;
		curANode = curANode->next;
		if (flagA && !curANode) {
			curANode = headB;
			flagA = false;
		}
		curBNode = curBNode->next;
		if (flagB && !curBNode) {
			curBNode = headA;
			flagB = false;
		}
	}
	return nullptr;
}