/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 *
 * https://leetcode.com/problems/linked-list-cycle/description/
 *
 * algorithms
 * Easy (37.88%)
 * Likes:    1750
 * Dislikes: 217
 * Total Accepted:    447.9K
 * Total Submissions: 1.2M
 * Testcase Example:  '[3,2,0,-4]\n1'
 *
 * Given a linked list, determine if it has a cycle in it.
 * 
 * To represent a cycle in the given linked list, we use an integer pos which
 * represents the position (0-indexed) in the linked list where tail connects
 * to. If pos is -1, then there is no cycle in the linked list.
 * 
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: head = [3,2,0,-4], pos = 1
 * Output: true
 * Explanation: There is a cycle in the linked list, where tail connects to the
 * second node.
 * 
 * 
 * 
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: head = [1,2], pos = 0
 * Output: true
 * Explanation: There is a cycle in the linked list, where tail connects to the
 * first node.
 * 
 * 
 * 
 * 
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: head = [1], pos = -1
 * Output: false
 * Explanation: There is no cycle in the linked list.
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * Follow up:
 * 
 * Can you solve it using O(1) (i.e. constant) memory?
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
    // bool hasCycle(ListNode *head) {
    //     if (!head)return false;
    //     ListNode* slowNode = head, *fastNode = head;
    //     while (slowNode && fastNode) {
    //         if (slowNode && fastNode->next) {
    //             slowNode = slowNode->next;
    //             fastNode = fastNode->next->next;
    //         }
    //         else return false;
    //         if (slowNode == fastNode)return true;
    //     }
    //     return false;
    // }
    // √ Accepted
    // √ 17/17 cases passed (12 ms)
    // √ Your runtime beats 72.6 % of cpp submissions
    // √ Your memory usage beats 100 % of cpp submissions (9.7 MB)

    // {A619DC48-112A-4435-BF1A-7F96499B2FB5}
    bool hasCycle(ListNode *head) {
        while (head) {
            if (head->val == 0xa619) {
                return true;
            }
            else {
                head->val = 0xa619;
                head = head->next;
            }
        }
        return false;
    }
    // √ Accepted
    // √ 17/17 cases passed (12 ms)
    // √ Your runtime beats 72.6 % of cpp submissions
    // √ Your memory usage beats 81.58 % of cpp submissions (9.8 MB)
};

