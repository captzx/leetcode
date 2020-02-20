/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 *
 * https://leetcode.com/problems/power-of-three/description/
 *
 * algorithms
 * Easy (41.85%)
 * Likes:    336
 * Dislikes: 1195
 * Total Accepted:    208.7K
 * Total Submissions: 498.4K
 * Testcase Example:  '27'
 *
 * Given an integer, write a function to determine if it is a power of three.
 * 
 * Example 1:
 * 
 * 
 * Input: 27
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 0
 * Output: false
 * 
 * Example 3:
 * 
 * 
 * Input: 9
 * Output: true
 * 
 * Example 4:
 * 
 * 
 * Input: 45
 * Output: false
 * 
 * Follow up:
 * Could you do it without using any loop / recursion?
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        return (n > 0 && 1162261467 % n == 0);
        // return fmod(log10(n)/log10(3), 1)==0;
    }
    // Accepted
    // 21038/21038 cases passed (24 ms)
    // Your runtime beats 27.47 % of cpp submissions
    // Your memory usage beats 76.19 % of cpp submissions (8.1 MB)
};
// @lc code=end

