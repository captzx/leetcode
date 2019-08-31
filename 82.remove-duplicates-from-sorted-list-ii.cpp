/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
 *
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/description/
 *
 * algorithms
 * Medium (33.88%)
 * Likes:    980
 * Dislikes: 84
 * Total Accepted:    196.8K
 * Total Submissions: 580.5K
 * Testcase Example:  '[1,2,3,3,4,4,5]'
 *
 * Given a sorted linked list, delete all nodes that have duplicate numbers,
 * leaving only distinct numbers from the original list.
 * 
 * Example 1:
 * 
 * 
 * Input: 1->2->3->3->4->4->5
 * Output: 1->2->5
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 1->1->1->2->3
 * Output: 2->3
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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head)return head;
        ListNode* curNode = head->next;
        ListNode* tmpNode = head, *prevNode = head;
        while (curNode) {
            while (curNode && curNode->val == tmpNode->val) {
                ListNode* holdCurNode = curNode;
                curNode = curNode->next;
                delete holdCurNode;
            }

            if (tmpNode->next == curNode) {
                if (tmpNode == head) prevNode = head;
                else prevNode = tmpNode;

                tmpNode = curNode;
            }
            else {
                ListNode* holdTmpNode = tmpNode;

                if (tmpNode == head) {
                    head = curNode;
                    prevNode = head;
                    tmpNode = head;
                }
                else {
                    prevNode->next = curNode;
                    tmpNode = curNode;
                }

                delete holdTmpNode;
            }

            if (curNode)curNode = curNode->next;
        }
        return head;
    }
    // √ Accepted
    // √ 168/168 cases passed (12 ms)
    // √ Your runtime beats 22.4 % of cpp submissions
    // √ Your memory usage beats 14.63 % of cpp submissions (9.3 MB)
};

