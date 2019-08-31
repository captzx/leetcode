/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 *
 * https://leetcode.com/problems/missing-number/description/
 *
 * algorithms
 * Easy (49.10%)
 * Likes:    1070
 * Dislikes: 1459
 * Total Accepted:    310.6K
 * Total Submissions: 632.3K
 * Testcase Example:  '[3,0,1]'
 *
 * Given an array containing n distinct numbers taken from 0, 1, 2, ..., n,
 * find the one that is missing from the array.
 * 
 * Example 1:
 * 
 * 
 * Input: [3,0,1]
 * Output: 2
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [9,6,4,2,3,5,7,0,1]
 * Output: 8
 * 
 * 
 * Note:
 * Your algorithm should run in linear runtime complexity. Could you implement
 * it using only constant extra space complexity?
 */
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        size_t size = nums.size();
        int missingSum = 0, Sum = size * (size+1) / 2;
        for (size_t i = 0; i < size; ++i) {
            missingSum += nums[i];
        }
        return Sum - missingSum;
    }
    // √ Accepted
    // √ 122/122 cases passed (24 ms)
    // √ Your runtime beats 79.68 % of cpp submissions
    // √ Your memory usage beats 100 % of cpp submissions (9.7 MB)
};

