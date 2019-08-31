/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 *
 * https://leetcode.com/problems/climbing-stairs/description/
 *
 * algorithms
 * Easy (44.87%)
 * Likes:    2569
 * Dislikes: 92
 * Total Accepted:    458.8K
 * Total Submissions: 1M
 * Testcase Example:  '2'
 *
 * You are climbing a stair case. It takes n steps to reach to the top.
 * 
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can
 * you climb to the top?
 * 
 * Note: Given n will be a positive integer.
 * 
 * Example 1:
 * 
 * 
 * Input: 2
 * Output: 2
 * Explanation: There are two ways to climb to the top.
 * 1. 1 step + 1 step
 * 2. 2 steps
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 3
 * Output: 3
 * Explanation: There are three ways to climb to the top.
 * 1. 1 step + 1 step + 1 step
 * 2. 1 step + 2 steps
 * 3. 2 steps + 1 step
 * 
 * 
 */
class Solution {
public:
    int climbStairs(int n) {
        if (n < 3) return n;
        int res = 0, step1 = 1, step2 = 2;
        for (int i = 3; i <= n; ++i) {
            res = step1 + step2;
            step1 = step2;
            step2 = res;
        }
        return res;
    }
    // √ Accepted
    // √ 45/45 cases passed (4 ms)
    // √ Your runtime beats 52.09 % of cpp submissions
    // √ Your memory usage beats 100 % of cpp submissions (8.1 MB)
};

