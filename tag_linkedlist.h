#pragma once

struct ListNode;

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2); // 002. Add Two Numbers

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
ListNode* mergeTwoLists2(ListNode* l1, ListNode* l2); // 021. Merge Two Sorted Lists

ListNode* rotateRight(ListNode* head, int k); //  061. Rotate List

ListNode* deleteDuplicatesList2(ListNode* head); // 082. Remove Duplicates from Sorted List II

ListNode* deleteDuplicatesList(ListNode* head); // 083. Remove Duplicates from Sorted List

bool hasCycle(ListNode *head);
bool hasCycle2(ListNode *head); // 141. Linked List Cycle

ListNode* reverseList(ListNode* head); // 203. Remove Linked List Elements
ListNode* reverseList2(ListNode* head); // 206. Reverse Linked List

bool isPalindrome(ListNode* head); // 234. Palindrome Linked List

void deleteNode(ListNode* node); // 237. Delete Node in a Linked List

ListNode* middleNode(ListNode* head); // 876. Middle of the Linked List

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB);
ListNode *getIntersectionNode2(ListNode *headA, ListNode *headB); // 160. Intersection of Two Linked Lists

ListNode* partition(ListNode* head, int x);