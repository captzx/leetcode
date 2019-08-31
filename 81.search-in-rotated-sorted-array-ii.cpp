/*
 * @lc app=leetcode id=81 lang=cpp
 *
 * [81] Search in Rotated Sorted Array II
 *
 * https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/
 *
 * algorithms
 * Medium (32.75%)
 * Likes:    771
 * Dislikes: 345
 * Total Accepted:    185.7K
 * Total Submissions: 567.1K
 * Testcase Example:  '[2,5,6,0,0,1,2]\n0'
 *
 * Suppose an array sorted in ascending order is rotated at some pivot unknown
 * to you beforehand.
 * 
 * (i.e., [0,0,1,2,2,5,6] might become [2,5,6,0,0,1,2]).
 * 
 * You are given a target value to search. If found in the array return true,
 * otherwise return false.
 * 
 * Example 1:
 * 
 * 
 * Input: nums = [2,5,6,0,0,1,2], target = 0
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums = [2,5,6,0,0,1,2], target = 3
 * Output: false
 * 
 * Follow up:
 * 
 * 
 * This is a follow up problem to Search in Rotated Sorted Array, where nums
 * may contain duplicates.
 * Would this affect the run-time complexity? How and why?
 * 
 * 
 */
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if (nums.empty())return false;
        int first = 0, last = nums.size() - 1;
        while (first < last) {
            if (nums[first] == target)return true;
            else ++first;
            if (nums[last] == target)return true;
            else --last;
        }
        return nums[first] == target;
    }
    // √ Accepted
    // √ 275/275 cases passed (8 ms)
    // √ Your runtime beats 61.09 % of cpp submissions
    // √ Your memory usage beats 100 % of cpp submissions (8.6 MB)
};

