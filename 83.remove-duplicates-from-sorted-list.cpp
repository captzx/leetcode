/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
 *
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
 *
 * algorithms
 * Easy (43.24%)
 * Likes:    883
 * Dislikes: 86
 * Total Accepted:    357.1K
 * Total Submissions: 825.4K
 * Testcase Example:  '[1,1,2]'
 *
 * Given a sorted linked list, delete all duplicates such that each element
 * appear only once.
 * 
 * Example 1:
 * 
 * 
 * Input: 1->1->2
 * Output: 1->2
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 1->1->2->3->3
 * Output: 1->2->3
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
    // √ Accepted
    // √ 165/165 cases passed (8 ms)
    // √ Your runtime beats 97.59 % of cpp submissions
    // √ Your memory usage beats 88.68 % of cpp submissions (9.2 MB)
};

