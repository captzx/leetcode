/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 *
 * https://leetcode.com/problems/power-of-two/description/
 *
 * algorithms
 * Easy (42.26%)
 * Likes:    493
 * Dislikes: 137
 * Total Accepted:    244.1K
 * Total Submissions: 577.5K
 * Testcase Example:  '1'
 *
 * Given an integer, write a function to determine if it is a power of two.
 * 
 * Example 1:
 * 
 * 
 * Input: 1
 * Output: true 
 * Explanation: 2^0 = 1
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 16
 * Output: true
 * Explanation: 2^4 = 16
 * 
 * Example 3:
 * 
 * 
 * Input: 218
 * Output: false
 * 
 */
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && !(n & (n-1));
    }
    // √ Accepted
    // √ 1108/1108 cases passed (0 ms)
    // √ Your runtime beats 100 % of cpp submissions
    // √ Your memory usage beats 68 % of cpp submissions (8.1 MB)
};

