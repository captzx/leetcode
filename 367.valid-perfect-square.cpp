/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 *
 * https://leetcode.com/problems/valid-perfect-square/description/
 *
 * algorithms
 * Easy (40.39%)
 * Likes:    538
 * Dislikes: 120
 * Total Accepted:    129K
 * Total Submissions: 318.9K
 * Testcase Example:  '16'
 *
 * Given a positive integer num, write a function which returns True if num is
 * a perfect square else False.
 * 
 * Note: Do not use any built-in library function such as sqrt.
 * 
 * Example 1:
 * 
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
 * Input: 14
 * Output: false
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(int num) {
        int first = 0, last = num;
        if(last / 2 > 50000) last = 50000;
        while(first <= last){
            int mid = (last + first) / 2;
            long long mid_mid = (long long)mid * mid;
            if(mid_mid == num) return true;
            else if(mid_mid > num) last = mid - 1;
            else first = mid + 1;
        }
        return false;
    }
    // 68/68 cases passed (4 ms)
    // Your runtime beats 54.91 % of cpp submissions
    // Your memory usage beats 100 % of cpp submissions (8 MB)
};
// @lc code=end

