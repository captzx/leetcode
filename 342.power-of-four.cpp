/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 *
 * https://leetcode.com/problems/power-of-four/description/
 *
 * algorithms
 * Easy (40.70%)
 * Likes:    353
 * Dislikes: 163
 * Total Accepted:    125.7K
 * Total Submissions: 308.2K
 * Testcase Example:  '16'
 *
 * Given an integer (signed 32 bits), write a function to check whether it is a
 * power of 4.
 * 
 * Example 1:
 * 
 * 
 * Input: 16
 * Output: true
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 5
 * Output: false
 * 
 * 
 * Follow up: Could you solve it without loops/recursion?
 */

// @lc code=start
class Solution {
public:
    //bool isPowerOfFour(int num) {
        // if(num < 0) return false;
        // int i = 0;
        // while(num) 
        // if((num & 1) != 0) break;
        // else {
        //     ++i;
        //     num >>= 1;
        // }

        // return num == 1 && i % 2 == 0; 
    //}
    // Accepted
    // 1060/1060 cases passed (4 ms)
    // Your runtime beats 58.37 % of cpp submissions
    // Your memory usage beats 100 % of cpp submissions (7.9 MB)
    
    bool isPowerOfFour(int num) {
        if(num <= 0) return false;

        return ((num & (num - 1)) == 0) && ((num & 0x55555555) != 0);
    }
    // Accepted
    // 1060/1060 cases passed (0 ms)
    // Your runtime beats 100 % of cpp submissions
    // Your memory usage beats 95.24 % of cpp submissions (8.1 MB)
};
// @lc code=end

