/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 *
 * https://leetcode.com/problems/spiral-matrix-ii/description/
 *
 * algorithms
 * Medium (47.93%)
 * Likes:    534
 * Dislikes: 86
 * Total Accepted:    146.6K
 * Total Submissions: 305.5K
 * Testcase Example:  '3'
 *
 * Given a positive integer n, generate a square matrix filled with elements
 * from 1 to n^2 in spiral order.
 * 
 * Example:
 * 
 * 
 * Input: 3
 * Output:
 * [
 * ⁠[ 1, 2, 3 ],
 * ⁠[ 8, 9, 4 ],
 * ⁠[ 7, 6, 5 ]
 * ]
 * 
 * 
 */
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        std::vector<std::vector<int>> matrix;
        matrix.resize(n);
        for (size_t i = 0; i < matrix.size(); ++i) {
            matrix[i].resize(n);
        }
        int xmax = n - 1, ymax = n - 1;
        int xmin = 0, ymin = 0;
        int x = 0, y = 0;

        int counter = 1;

        while (xmax >= xmin && ymax >= ymin) {
            if (xmin == xmax && ymin == ymax) {
                matrix[x][y] = counter++;
                return matrix;
            }
            else {
                for (; y < ymax; ++y)matrix[x][y] = counter++;
                for (; x < xmax; ++x)matrix[x][y] = counter++;
                for (; y > ymin; --y)matrix[x][y] = counter++;
                for (; x > xmin; --x)matrix[x][y] = counter++;
            }
            xmax--; ymax--;
            xmin++; ymin++;
            ++x; ++y;
        }
        return matrix;
    }
    // √ Accepted
    // √ 20/20 cases passed (4 ms)
    // √ Your runtime beats 73.52 % of cpp submissions
    // √ Your memory usage beats 68.75 % of cpp submissions (8.9 MB)
};

