/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
 *
 * https://leetcode.com/problems/reverse-linked-list/description/
 *
 * algorithms
 * Easy (56.40%)
 * Likes:    2706
 * Dislikes: 69
 * Total Accepted:    665.1K
 * Total Submissions: 1.2M
 * Testcase Example:  '[1,2,3,4,5]'
 *
 * Reverse a singly linked list.
 * 
 * Example:
 * 
 * 
 * Input: 1->2->3->4->5->NULL
 * Output: 5->4->3->2->1->NULL
 * 
 * 
 * Follow up:
 * 
 * A linked list can be reversed either iteratively or recursively. Could you
 * implement both?
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
    // ListNode* reverseList(ListNode* head) {
    //   if (!head || !head->next)return head;
    //     ListNode *nextNode = head, *curNode = nullptr;
    //     while (nextNode) {
    //         ListNode* tmpNode = nullptr;
    //         if (nextNode->next)tmpNode = nextNode->next; // 额外的节点保存被扯断指针的下一个节点
    //         nextNode->next = curNode;
    //         curNode = nextNode;
    //         nextNode = tmpNode;
    //     }
    //     return curNode;  
    // }
    // √ Accepted
    // √ 27/27 cases passed (8 ms)
    // √ Your runtime beats 77.42 % of cpp submissions
    // √ Your memory usage beats 97.71 % of cpp submissions (9.1 MB)

    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next)return head;
        ListNode* nextNode = head;
        head = reverseList(nextNode->next);
        nextNode->next->next = nextNode;
        nextNode->next = nullptr;
        return head;
    }
    // √ Accepted
    // √ 27/27 cases passed (4 ms)
    // √ Your runtime beats 98.94 % of cpp submissions
    // √ Your memory usage beats 70.23 % of cpp submissions (9.3 MB)
};

