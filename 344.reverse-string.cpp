/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 *
 * https://leetcode.com/problems/reverse-string/description/
 *
 * algorithms
 * Easy (64.05%)
 * Likes:    905
 * Dislikes: 579
 * Total Accepted:    516.5K
 * Total Submissions: 803.1K
 * Testcase Example:  '["h","e","l","l","o"]'
 *
 * Write a function that reverses a string. The input string is given as an
 * array of characters char[].
 * 
 * Do not allocate extra space for another array, you must do this by modifying
 * the input array in-place with O(1) extra memory.
 * 
 * You may assume all the characters consist of printable ascii
 * characters.
 * 
 * 
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: ["h","e","l","l","o"]
 * Output: ["o","l","l","e","h"]
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: ["H","a","n","n","a","h"]
 * Output: ["h","a","n","n","a","H"]
 * 
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        int begin = 0, end  =  s.size() - 1;
        while(begin < end){
            char c = s[begin];
            s[begin] = s[end];
            s[end] = c;

            ++begin;
            --end;
        }
    }
    // Accepted
    // 478/478 cases passed (56 ms)
    // Your runtime beats 12.16 % of cpp submissions
    // Your memory usage beats 96.34 % of cpp submissions (15.2 MB)
};
// @lc code=end

