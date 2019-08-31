/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
 *
 * https://leetcode.com/problems/rotate-list/description/
 *
 * algorithms
 * Medium (27.82%)
 * Likes:    693
 * Dislikes: 866
 * Total Accepted:    209.6K
 * Total Submissions: 752.9K
 * Testcase Example:  '[1,2,3,4,5]\n2'
 *
 * Given a linked list, rotate the list to the right by k places, where k is
 * non-negative.
 * 
 * Example 1:
 * 
 * 
 * Input: 1->2->3->4->5->NULL, k = 2
 * Output: 4->5->1->2->3->NULL
 * Explanation:
 * rotate 1 steps to the right: 5->1->2->3->4->NULL
 * rotate 2 steps to the right: 4->5->1->2->3->NULL
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 0->1->2->NULL, k = 4
 * Output: 2->0->1->NULL
 * Explanation:
 * rotate 1 steps to the right: 2->0->1->NULL
 * rotate 2 steps to the right: 1->2->0->NULL
 * rotate 3 steps to the right: 0->1->2->NULL
 * rotate 4 steps to the right: 2->0->1->NULL
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
    // √ Accepted
    // √ 231/231 cases passed (8 ms)
    // √ Your runtime beats 80.04 % of cpp submissions
    // √ Your memory usage beats 97.62 % of cpp submissions (8.8 MB)
};

