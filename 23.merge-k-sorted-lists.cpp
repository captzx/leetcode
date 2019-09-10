/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
 *
 * https://leetcode.com/problems/merge-k-sorted-lists/description/
 *
 * algorithms
 * Hard (35.71%)
 * Likes:    2878
 * Dislikes: 190
 * Total Accepted:    444.6K
 * Total Submissions: 1.2M
 * Testcase Example:  '[[1,4,5],[1,3,4],[2,6]]'
 *
 * Merge k sorted linked lists and return it as one sorted list. Analyze and
 * describe its complexity.
 * 
 * Example:
 * 
 * 
 * Input:
 * [
 * 1->4->5,
 * 1->3->4,
 * 2->6
 * ]
 * Output: 1->1->2->3->4->4->5->6
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
    //ListNode* mergeKLists(vector<ListNode*>& lists) {
        // ListNode* result = new ListNode(-1);
        // ListNode* pNode = result;
        // bool endflag = false;
        // while(!endflag){
        //     int min = INT_MAX;
        //     int line = 0;
        //     endflag = true;
        //     for(size_t i = 0; i < lists.size(); ++i){
        //         if(lists[i] != nullptr){
        //             endflag = false;
        //             if(lists[i]->val < min){
        //                 min = lists[i]->val;
        //                 line = i;
        //             }
        //         }
        //     }

        //     if(!endflag){
        //         pNode->next = new ListNode(min);
        //         pNode = pNode->next;
        //         if(lists[line]) lists[line] = lists[line]->next; 
        //     }
        // }
        
        // ListNode* pHeadNode = result;
        // result = pHeadNode->next;
        // delete pHeadNode;

        // return result;
    //}
    // √ Accepted
    // √ 131/131 cases passed (348 ms)
    // √ Your runtime beats 11.87 % of cpp submissions
    // √ Your memory usage beats 30.95 % of cpp submissions (11.5 MB)
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* result = nullptr;

        if(std::all_of(lists.begin(), lists.end(), [](ListNode* pNode){return pNode == nullptr;})) return result;

        int min = INT_MAX;
        int line = 0;
        for(size_t i = 0; i < lists.size(); ++i){
            if(lists[i]){
                if(lists[i]->val < min){
                    min = lists[i]->val;
                    line = i;
                }
            }
        }
        
        result = new ListNode(min);
        lists[line] = lists[line]->next; 

        result->next = mergeKLists(lists);

        return result;
    }
    // √ Accepted
    // √ 131/131 cases passed (364 ms)
    // √ Your runtime beats 11.52 % of cpp submissions
    // √ Your memory usage beats 5.95 % of cpp submissions (19.8 MB)
};

