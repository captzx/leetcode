/*
 * @lc app=leetcode id=371 lang=cpp
 *
 * [371] Sum of Two Integers
 *
 * https://leetcode.com/problems/sum-of-two-integers/description/
 *
 * algorithms
 * Easy (50.79%)
 * Likes:    878
 * Dislikes: 1645
 * Total Accepted:    151.8K
 * Total Submissions: 298.8K
 * Testcase Example:  '1\n2'
 *
 * Calculate the sum of two integers a and b, but you are not allowed to use
 * the operator + and -.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: a = 1, b = 2
 * Output: 3
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: a = -2, b = 3
 * Output: 1
 * 
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int getSum(int a, int b) {
        if(b == 0) return a;
        int sum = a ^ b;
        int carry = (a & b & 0x7FFFFFFF) << 1;
        return getSum(sum, carry);
    }
    // 13/13 cases passed (0 ms)
    // Your runtime beats 100 % of cpp submissions
    // Your memory usage beats 91.67 % of cpp submissions (8.2 MB)
};
// @lc code=end

