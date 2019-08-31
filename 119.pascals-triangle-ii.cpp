/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 *
 * https://leetcode.com/problems/pascals-triangle-ii/description/
 *
 * algorithms
 * Easy (44.88%)
 * Likes:    539
 * Dislikes: 177
 * Total Accepted:    221.5K
 * Total Submissions: 493K
 * Testcase Example:  '3'
 *
 * Given a non-negative index k where k ≤ 33, return the k^th index row of the
 * Pascal's triangle.
 * 
 * Note that the row index starts from 0.
 * 
 * 
 * In Pascal's triangle, each number is the sum of the two numbers directly
 * above it.
 * 
 * Example:
 * 
 * 
 * Input: 3
 * Output: [1,3,3,1]
 * 
 * 
 * Follow up:
 * 
 * Could you optimize your algorithm to use only O(k) extra space?
 * 
 */
class Solution {
public:
    int c(int m, int n) {
        // c(m,m)=c(m,0)=1 c(0,0)=1
        if (n == m || n == 0)return 1;
        long long t = 1, b = 1;
        for (int i = 1; i <= n; ++i) {
            t *= (m-i+1);
            b *= i;
            while (t % 2 == 0 && b % 2 == 0) {
                t /= 2;
                b /= 2;
            }
            while (t % 3 == 0 && b % 3 == 0) {
                t /= 3;
                b /= 3;
            }
        }
        return int(t / b);
    }

    std::vector<int> getRow(int rowIndex) {
        std::vector<int> result(rowIndex + 1, 1);
        for (int i = 0; i <= (rowIndex + 1) / 2; ++i) {
            result[i] = c(rowIndex, i);
            result[rowIndex - i] = result[i];
        }
        return result;
    }
    // √ Accepted
    // √ 34/34 cases passed (4 ms)
    // √ Your runtime beats 60.25 % of cpp submissions
    // √ Your memory usage beats 90.32 % of cpp submissions (8.4 MB)
};

