/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 *
 * https://leetcode.com/problems/unique-paths/description/
 *
 * algorithms
 * Medium (48.83%)
 * Likes:    1834
 * Dislikes: 126
 * Total Accepted:    323.1K
 * Total Submissions: 660.9K
 * Testcase Example:  '3\n2'
 *
 * A robot is located at the top-left corner of a m x n grid (marked 'Start' in
 * the diagram below).
 * 
 * The robot can only move either down or right at any point in time. The robot
 * is trying to reach the bottom-right corner of the grid (marked 'Finish' in
 * the diagram below).
 * 
 * How many possible unique paths are there?
 * 
 * 
 * Above is a 7 x 3 grid. How many possible unique paths are there?
 * 
 * Note: m and n will be at most 100.
 * 
 * Example 1:
 * 
 * 
 * Input: m = 3, n = 2
 * Output: 3
 * Explanation:
 * From the top-left corner, there are a total of 3 ways to reach the
 * bottom-right corner:
 * 1. Right -> Right -> Down
 * 2. Right -> Down -> Right
 * 3. Down -> Right -> Right
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: m = 7, n = 3
 * Output: 28
 * 
 */
class Solution {
public:
    int uniquePaths(int m, int n) {
        std::vector<std::vector<int>> res(m, std::vector<int>(n));

        for (int i = 0; i < m; ++i) {
            res[i][n - 1] = 1;
        }

        for (int i = 0; i < n - 1; ++i) {
            res[m - 1][i] = 1;
        }

        for (int i = m - 2; i >= 0; --i) {
            for (int j = n - 2; j >= 0; --j) {
                res[i][j] = res[i + 1][j] + res[i][j + 1];
            }
        }
        return res[0][0];
    }
    // √ Accepted
    // √ 62/62 cases passed (4 ms)
    // √ Your runtime beats 55.11 % of cpp submissions
    // √ Your memory usage beats 17.19 % of cpp submissions (8.9 MB)
};

