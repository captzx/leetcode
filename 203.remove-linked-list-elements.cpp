/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
 *
 * https://leetcode.com/problems/remove-linked-list-elements/description/
 *
 * algorithms
 * Easy (36.30%)
 * Likes:    936
 * Dislikes: 59
 * Total Accepted:    245.4K
 * Total Submissions: 675.7K
 * Testcase Example:  '[1,2,6,3,4,5,6]\n6'
 *
 * Remove all elements from a linked list of integers that have value val.
 * 
 * Example:
 * 
 * 
 * Input:  1->2->6->3->4->5->6, val = 6
 * Output: 1->2->3->4->5
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
    // ListNode* removeElements(ListNode* head, int val) {
    //     while (head && head->val == val) {
    //         ListNode* tmpNode = head;
    //         head = head->next;
    //         delete tmpNode;
    //     }
    //     if (!head)return nullptr;
    //     ListNode*prevNode = head, *curNode = head->next;
    //     while (curNode) {
    //         if (curNode->val == val) {
    //             if (curNode->next) {
    //                 ListNode* tmpNode = curNode->next;
    //                 curNode->val = curNode->next->val;
    //                 curNode->next = curNode->next->next;
    //                 delete tmpNode;
    //                 continue;			// 相同元素继续处理
    //             }
    //             else {					// 若是最后一个元素
    //                 prevNode->next = nullptr;
    //                 delete curNode;
    //                 curNode = nullptr;
    //             }
    //         }
    //         if (prevNode)prevNode = curNode;	// delete过，所以需要判断是否有效
    //         if (curNode)curNode = curNode->next;// delete过，所以需要判断是否有效
    //     }
    //     return head;
    // }
    // √ Accepted
    // √ 65/65 cases passed (28 ms)
    // √ Your runtime beats 65.16 % of cpp submissions
    // √ Your memory usage beats 15.09 % of cpp submissions (11.2 MB)

    ListNode* removeElements(ListNode* head, int val) {
        auto curNode = head;

        while(curNode && curNode->val == val){
            curNode = curNode->next;
        }

        auto result = curNode;

        while(curNode){
            auto nextNode = curNode->next;
            while(nextNode && nextNode->val == val){
                nextNode = nextNode->next;
            }
            curNode->next = nextNode;
            curNode = curNode->next;
        }

        return result;
    }
    // √ Accepted
    // √ 65/65 cases passed (24 ms)
    // √ Your runtime beats 94.6 % of cpp submissions
    // √ Your memory usage beats 100 % of cpp submissions (10.9 MB)
};

