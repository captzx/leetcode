/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 *
 * https://leetcode.com/problems/palindrome-linked-list/description/
 *
 * algorithms
 * Easy (36.85%)
 * Likes:    1890
 * Dislikes: 272
 * Total Accepted:    291.4K
 * Total Submissions: 790.5K
 * Testcase Example:  '[1,2]'
 *
 * Given a singly linked list, determine if it is a palindrome.
 * 
 * Example 1:
 * 
 * 
 * Input: 1->2
 * Output: false
 * 
 * Example 2:
 * 
 * 
 * Input: 1->2->2->1
 * Output: true
 * 
 * Follow up:
 * Could you do it in O(n) time and O(1) space?
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
       bool isPalindrome(ListNode* head) {
        if(!head) return true;
        std::stack<int> value_stack;
        auto go_1step = head;
        auto go_2step = head;
        while(go_2step){
            value_stack.push(go_1step->val);
            go_1step = go_1step->next;

            if(go_2step->next == nullptr){
                value_stack.pop();
                break;
            }
            if(go_2step->next->next == nullptr) {
                break;
            }
            go_2step = go_2step->next->next;
        }

        while(!value_stack.empty()){
            if(go_1step->val != value_stack.top()) return false;
            else {
                go_1step= go_1step->next;
                value_stack.pop();
            }
        }
        return true;
    }
    //√ Accepted
    //√ 26/26 cases passed (24 ms)
    //√ Your runtime beats 66.88 % of cpp submissions
    //√ Your memory usage beats 37.93 % of cpp submissions (13.1 MB)
};

