/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
 *
 * https://leetcode.com/problems/swap-nodes-in-pairs/description/
 *
 * algorithms
 * Medium (46.00%)
 * Likes:    1373
 * Dislikes: 120
 * Total Accepted:    351.7K
 * Total Submissions: 761.4K
 * Testcase Example:  '[1,2,3,4]'
 *
 * Given a linked list, swap every two adjacent nodes and return its head.
 * 
 * You may not modify the values in the list's nodes, only nodes itself may be
 * changed.
 * 
 * 
 * 
 * Example:
 * 
 * 
 * Given 1->2->3->4, you should return the list as 2->1->4->3.
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* result = nullptr;
        if(!head || !head->next) return head;

        ListNode* pHeadNode = new ListNode(-1);
        pHeadNode->next = head;
        ListNode* pNode1 = head;
        ListNode* pNode2 = head->next;
        ListNode* pNextHeadNode = pNode2->next;
        pHeadNode->next = pNode2;
        pNode2->next = pNode1;
        pNode1->next = swapPairs(pNextHeadNode);

        result = pHeadNode->next;
        delete pHeadNode;
        return result;
    }
    // √ Accepted
    // √ 55/55 cases passed (4 ms)
    // √ Your runtime beats 68.94 % of cpp submissions
    // √ Your memory usage beats 5.36 % of cpp submissions (8.9 MB)
};

