/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 *
 * https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
 *
 * algorithms
 * Easy (41.66%)
 * Likes:    1691
 * Dislikes: 3638
 * Total Accepted:    669.5K
 * Total Submissions: 1.6M
 * Testcase Example:  '[1,1,2]'
 *
 * Given a sorted array nums, remove the duplicates in-place such that each
 * element appear only once and return the new length.
 * 
 * Do not allocate extra space for another array, you must do this by modifying
 * the input array in-place with O(1) extra memory.
 * 
 * Example 1:
 * 
 * 
 * Given nums = [1,1,2],
 * 
 * Your function should return length = 2, with the first two elements of nums
 * being 1 and 2 respectively.
 * 
 * It doesn't matter what you leave beyond the returned length.
 * 
 * Example 2:
 * 
 * 
 * Given nums = [0,0,1,1,1,2,2,3,3,4],
 * 
 * Your function should return length = 5, with the first five elements of nums
 * being modified to 0, 1, 2, 3, and 4 respectively.
 * 
 * It doesn't matter what values are set beyond the returned length.
 * 
 * 
 * Clarification:
 * 
 * Confused why the returned value is an integer but your answer is an array?
 * 
 * Note that the input array is passed in by reference, which means
 * modification to the input array will be known to the caller as well.
 * 
 * Internally you can think of this:
 * 
 * 
 * // nums is passed in by reference. (i.e., without making a copy)
 * int len = removeDuplicates(nums);
 * 
 * // any modification to nums in your function would be known by the caller.
 * // using the length returned by your function, it prints the first len
 * elements.
 * for (int i = 0; i < len; i++) {
 * print(nums[i]);
 * }
 * 
 */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        // 设置两个指针frontit，backit指向数组头部，backit向前遍历数组  
        auto frontit = nums.begin(), backit = nums.begin();
        while(backit != nums.end()) {
            if (*frontit == *backit) ++backit;
            // 若backit指向的值与frontit指向的值不同，则frontit向后迭代一次，并将其制设置为backit所指向的值
            else *(++frontit) = *backit;
        }
        return frontit - nums.begin() + 1;
    }
    // √ Accepted
    // √ 161/161 cases passed (24 ms)
    // √ Your runtime beats 59.85 % of cpp submissions
    // √ Your memory usage beats 83.75 % of cpp submissions (9.9 MB)
};

