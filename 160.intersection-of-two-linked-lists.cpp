/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 *
 * https://leetcode.com/problems/intersection-of-two-linked-lists/description/
 *
 * algorithms
 * Easy (35.24%)
 * Likes:    2357
 * Dislikes: 229
 * Total Accepted:    336.1K
 * Total Submissions: 952.3K
 * Testcase Example:  '8\n[4,1,8,4,5]\n[5,0,1,8,4,5]\n2\n3'
 *
 * Write a program to find the node at which the intersection of two singly
 * linked lists begins.
 * 
 * For example, the following two linked lists:
 * 
 * 
 * begin to intersect at node c1.
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * 
 * Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,0,1,8,4,5], skipA =
 * 2, skipB = 3
 * Output: Reference of the node with value = 8
 * Input Explanation: The intersected node's value is 8 (note that this must
 * not be 0 if the two lists intersect). From the head of A, it reads as
 * [4,1,8,4,5]. From the head of B, it reads as [5,0,1,8,4,5]. There are 2
 * nodes before the intersected node in A; There are 3 nodes before the
 * intersected node in B.
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * 
 * Input: intersectVal = 2, listA = [0,9,1,2,4], listB = [3,2,4], skipA = 3,
 * skipB = 1
 * Output: Reference of the node with value = 2
 * Input Explanation: The intersected node's value is 2 (note that this must
 * not be 0 if the two lists intersect). From the head of A, it reads as
 * [0,9,1,2,4]. From the head of B, it reads as [3,2,4]. There are 3 nodes
 * before the intersected node in A; There are 1 node before the intersected
 * node in B.
 * 
 * 
 * 
 * 
 * Example 3:
 * 
 * 
 * 
 * Input: intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB =
 * 2
 * Output: null
 * Input Explanation: From the head of A, it reads as [2,6,4]. From the head of
 * B, it reads as [1,5]. Since the two lists do not intersect, intersectVal
 * must be 0, while skipA and skipB can be arbitrary values.
 * Explanation: The two lists do not intersect, so return null.
 * 
 * 
 * 
 * 
 * Notes:
 * 
 * 
 * If the two linked lists have no intersection at all, return null.
 * The linked lists must retain their original structure after the function
 * returns.
 * You may assume there are no cycles anywhere in the entire linked
 * structure.
 * Your code should preferably run in O(n) time and use only O(1) memory.
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
    // ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    //     ListNode* curANode = headA, *curBNode = headB;
    //     int lengthA = 0, lengthB = 0;
    //     while (curANode) {
    //         curANode = curANode->next;
    //         ++lengthA;
    //     }
    //     while (curBNode) {
    //         curBNode = curBNode->next;
    //         ++lengthB;
    //     }
    //     curANode = headA;
    //     curBNode = headB;
    //     while (lengthA > lengthB) {
    //         curANode = curANode->next;
    //         --lengthA;
    //     }
    //     while (lengthA < lengthB) {
    //         curBNode = curBNode->next;
    //         --lengthB;
    //     }
    //     while (curANode && curBNode) {
    //         if (curANode == curBNode)return curANode;
    //         curANode = curANode->next;
    //         curBNode = curBNode->next;
    //     }
    //     return nullptr;
    // }
    // √ Accepted
    // √ 45/45 cases passed (48 ms)
    // √ Your runtime beats 81.4 % of cpp submissions
    // √ Your memory usage beats 96.3 % of cpp submissions (16.6 MB)

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curANode = headA, *curBNode = headB;
        bool flagA = true, flagB = true;
        while (curANode && curBNode) {
            if (curANode == curBNode)return curANode;
            curANode = curANode->next;
            if (flagA && !curANode) {
                curANode = headB;
                flagA = false;
            }
            curBNode = curBNode->next;
            if (flagB && !curBNode) {
                curBNode = headA;
                flagB = false;
            }
        }
        return nullptr;
    }
    // √ Accepted
    // √ 45/45 cases passed (44 ms)
    // √ Your runtime beats 94.11 % of cpp submissions
    // √ Your memory usage beats 64.81 % of cpp submissions (16.8 MB)
};

