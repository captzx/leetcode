/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 *
 * https://leetcode.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (31.65%)
 * Likes:    5849
 * Dislikes: 1507
 * Total Accepted:    992.3K
 * Total Submissions: 3.1M
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order and each of their nodes
 * contain a single digit. Add the two numbers and return it as a linked list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the
 * number 0 itself.
 * 
 * Example:
 * 
 * 
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curNode = nullptr;
        ListNode* headNode = nullptr;		// 头结点
        int c = 0;							// 进位
        while (l1 != nullptr || l2 != nullptr) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + c;
            ListNode* newNode = new ListNode(sum % 10);
            c = sum / 10;
            if (headNode != nullptr)curNode->next = newNode;
            else  headNode = newNode;
            curNode = newNode;
            if(l1)l1 = l1->next;
            if(l2)l2 = l2->next;
        }
        if (c == 1)curNode->next = new ListNode(c);
        return headNode;
    }
    // √ Accepted
    // √ 1563/1563 cases passed (24 ms)
    // √ Your runtime beats 63.86 % of cpp submissions
    // √ Your memory usage beats 62.29 % of cpp submissions (10.4 MB)
};

