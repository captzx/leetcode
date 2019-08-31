/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 *
 * https://leetcode.com/problems/plus-one/description/
 *
 * algorithms
 * Easy (41.60%)
 * Likes:    966
 * Dislikes: 1711
 * Total Accepted:    434.6K
 * Total Submissions: 1M
 * Testcase Example:  '[1,2,3]'
 *
 * Given a non-empty array of digits representing a non-negative integer, plus
 * one to the integer.
 * 
 * The digits are stored such that the most significant digit is at the head of
 * the list, and each element in the array contain a single digit.
 * 
 * You may assume the integer does not contain any leading zero, except the
 * number 0 itself.
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,3]
 * Output: [1,2,4]
 * Explanation: The array represents the integer 123.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [4,3,2,1]
 * Output: [4,3,2,2]
 * Explanation: The array represents the integer 4321.
 * 
 */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; --i) {
            if (digits[i] <= 8) {
                digits[i] += 1;
                break;
            }
            else {
                if (i != 0)digits[i] = 0;
                else {
                    digits[i] = 1;
                    digits.push_back(0);
                }
            }
        }
        return digits;
    }
    // √ Accepted
    // √ 109/109 cases passed (4 ms)
    // √ Your runtime beats 65.23 % of cpp submissions
    // √ Your memory usage beats 91.8 % of cpp submissions (8.6 MB)
};

