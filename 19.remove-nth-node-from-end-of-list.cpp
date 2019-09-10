/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
 *
 * https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
 *
 * algorithms
 * Medium (34.53%)
 * Likes:    2109
 * Dislikes: 160
 * Total Accepted:    444.9K
 * Total Submissions: 1.3M
 * Testcase Example:  '[1,2,3,4,5]\n2'
 *
 * Given a linked list, remove the n-th node from the end of list and return
 * its head.
 * 
 * Example:
 * 
 * 
 * Given linked list: 1->2->3->4->5, and n = 2.
 * 
 * After removing the second node from the end, the linked list becomes
 * 1->2->3->5.
 * 
 * 
 * Note:
 * 
 * Given n will always be valid.
 * 
 * Follow up:
 * 
 * Could you do this in one pass?
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || n == 0) return head;

        ListNode* pHeadNode = new ListNode(0);
        pHeadNode->next = head;

        ListNode* pFrontNode = pHeadNode;
        ListNode* pBackNode = pHeadNode;
        while(n >= 0){
            if(!pBackNode) return head;

            pBackNode = pBackNode->next;
            --n;
        }

        if(pBackNode){
            while(pBackNode){
                pBackNode = pBackNode->next;
                pFrontNode = pFrontNode->next;
            }
        }

        ListNode* pNthNode = pFrontNode->next;
       
        pFrontNode->next = pNthNode->next;
        delete pNthNode;

        head = pHeadNode->next;
        delete pHeadNode;

        return head;
    }
    // √ Accepted
    // √ 208/208 cases passed (8 ms)
    // √ Your runtime beats 13.85 % of cpp submissions
    // √ Your memory usage beats 92.11 % of cpp submissions (8.5 MB)
};

