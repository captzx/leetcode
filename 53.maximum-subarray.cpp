/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 *
 * https://leetcode.com/problems/maximum-subarray/description/
 *
 * algorithms
 * Easy (44.35%)
 * Likes:    4938
 * Dislikes: 184
 * Total Accepted:    609.6K
 * Total Submissions: 1.4M
 * Testcase Example:  '[-2,1,-3,4,-1,2,1,-5,4]'
 *
 * Given an integer array nums, find the contiguous subarray (containing at
 * least one number) which has the largest sum and return its sum.
 * 
 * Example:
 * 
 * 
 * Input: [-2,1,-3,4,-1,2,1,-5,4],
 * Output: 6
 * Explanation: [4,-1,2,1] has the largest sum = 6.
 * 
 * 
 * Follow up:
 * 
 * If you have figured out the O(n) solution, try coding another solution using
 * the divide and conquer approach, which is more subtle.
 * 
 */
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tmp_sum = 0, max_sum = INT_MIN;
        for (auto num : nums) {
            tmp_sum += num;
            max_sum = std::max(max_sum, tmp_sum);
            if (tmp_sum < 0)tmp_sum = 0;
        }
        return max_sum;
    }
    // √ Accepted
    // √ 202/202 cases passed (8 ms)
    // √ Your runtime beats 71.73 % of cpp submissions
    // √ Your memory usage beats 84.31 % of cpp submissions (9.2 MB)
};

