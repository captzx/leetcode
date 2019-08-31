/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 *
 * https://leetcode.com/problems/happy-number/description/
 *
 * algorithms
 * Easy (46.26%)
 * Likes:    990
 * Dislikes: 262
 * Total Accepted:    259K
 * Total Submissions: 559.1K
 * Testcase Example:  '19'
 *
 * Write an algorithm to determine if a number is "happy".
 * 
 * A happy number is a number defined by the following process: Starting with
 * any positive integer, replace the number by the sum of the squares of its
 * digits, and repeat the process until the number equals 1 (where it will
 * stay), or it loops endlessly in a cycle which does not include 1. Those
 * numbers for which this process ends in 1 are happy numbers.
 * 
 * Example: 
 * 
 * 
 * Input: 19
 * Output: true
 * Explanation: 
 * 1^2 + 9^2 = 82
 * 8^2 + 2^2 = 68
 * 6^2 + 8^2 = 100
 * 1^2 + 0^2 + 0^2 = 1
 * 
 */
class Solution {
public:
    bool isHappy(int n) {
        std::map<int, bool> sumMap;
        while (n != 1) {
            int sum = 0;
            int digit = n;
            while (digit / 10 || digit % 10) {
                sum += (digit % 10)*(digit % 10);
                digit /= 10;
            }
            if (sumMap.find(sum) == sumMap.end()) {
                sumMap[sum] = true;
            }
            else {
                return false;
            }
            n = sum;
        }
        return true;
    }
    // √ Accepted
    // √ 401/401 cases passed (4 ms)
    // √ Your runtime beats 66.17 % of cpp submissions
    // √ Your memory usage beats 57.69 % of cpp submissions (8.5 MB)
};

