/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 *
 * https://leetcode.com/problems/merge-two-sorted-lists/description/
 *
 * algorithms
 * Easy (48.55%)
 * Likes:    2564
 * Dislikes: 371
 * Total Accepted:    662.7K
 * Total Submissions: 1.4M
 * Testcase Example:  '[1,2,4]\n[1,3,4]'
 *
 * Merge two sorted linked lists and return it as a new list. The new list
 * should be made by splicing together the nodes of the first two lists.
 * 
 * Example:
 * 
 * Input: 1->2->4, 1->3->4
 * Output: 1->1->2->3->4->4
 * 
 * 
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1)return l2;
        if (!l2)return l1;
        ListNode* curNode = nullptr, *resultList = nullptr;
        while (l1&&l2) {
            if (l1->val <= l2->val) {		// 比较
                if (resultList) {
                    curNode->next = l1;
                    curNode = curNode->next;
                }
                else {
                    curNode = l1;
                    resultList = l1;
                }
                l1 = l1->next;
            }
            else {
                if (resultList) {
                    curNode->next = l2;
                    curNode = curNode->next;
                }
                else {
                    curNode = l2;
                    resultList = l2;
                }
                l2 = l2->next;
            }
        }
        if (l1)curNode->next = l1;
        if (l2)curNode->next = l2;
        return resultList;
    }
    // √ Accepted
    // √ 208/208 cases passed (8 ms)
    // √ Your runtime beats 77.07 % of cpp submissions
    // √ Your memory usage beats 95.08 % of cpp submissions (8.8 MB)

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l1)return l2;
        if (!l2)return l1;
        ListNode* returnNode = nullptr;
        if (l1->val <= l2->val) {
            returnNode = l1;	// 入栈保存将要返回的节点
            returnNode->next = mergeTwoLists(l1->next, l2);
        }
        else {
            returnNode = l2;
            returnNode->next = mergeTwoLists(l1, l2->next);
        }
        return returnNode;		// 出栈输出保存的节点
    }
    // √ Accepted
    // √ 208/208 cases passed (8 ms)
    // √ Your runtime beats 77.07 % of cpp submissions
    // √ Your memory usage beats 92.62 % of cpp submissions (8.8 MB)
};

