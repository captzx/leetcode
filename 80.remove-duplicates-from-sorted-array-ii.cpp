/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 *
 * https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/
 *
 * algorithms
 * Medium (41.12%)
 * Likes:    747
 * Dislikes: 573
 * Total Accepted:    216K
 * Total Submissions: 524.9K
 * Testcase Example:  '[1,1,1,2,2,3]'
 *
 * Given a sorted array nums, remove the duplicates in-place such that
 * duplicates appeared at most twice and return the new length.
 * 
 * Do not allocate extra space for another array, you must do this by modifying
 * the input array in-place with O(1) extra memory.
 * 
 * Example 1:
 * 
 * 
 * Given nums = [1,1,1,2,2,3],
 * 
 * Your function should return length = 5, with the first five elements of nums
 * being 1, 1, 2, 2 and 3 respectively.
 * 
 * It doesn't matter what you leave beyond the returned length.
 * 
 * Example 2:
 * 
 * 
 * Given nums = [0,0,1,1,1,1,2,3,3],
 * 
 * Your function should return length = 7, with the first seven elements of
 * nums being modified to 0, 0, 1, 1, 2, 3 and 3 respectively.
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
 * 
 */
class Solution {
public:
    // int removeDuplicates(vector<int>& nums) {
    //     if (nums.empty()) return 0;
    //     int v = nums[0], counter = 1, index = 1;
    //     for (size_t i = 1; i < nums.size(); ++i) {
    //         if (nums[i] == v) {
    //             ++counter;
    //         }
    //         else {
    //             counter = 1;
    //             v = nums[i];
    //         }

    //         if (counter == 1 || counter == 2) {
    //             std::swap(nums[index], nums[i]);
    //             ++index;
    //         }
    //     }
    //     return index;
    // }
    // √ Accepted
    // √ 166/166 cases passed (12 ms)
    // √ Your runtime beats 83.34 % of cpp submissions
    // √ Your memory usage beats 100 % of cpp submissions (8.6 MB)

    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int n : nums)
        if (i < 2 || n > nums[i-2])
            nums[i++] = n;
        return i;
    }
    // √ Accepted
    // √ 166/166 cases passed (12 ms)
    // √ Your runtime beats 83.34 % of cpp submissions
    // √ Your memory usage beats 68.42 % of cpp submissions (8.8 MB)
};

