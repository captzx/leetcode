/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 *
 * https://leetcode.com/problems/pascals-triangle/description/
 *
 * algorithms
 * Easy (47.54%)
 * Likes:    826
 * Dislikes: 84
 * Total Accepted:    281.2K
 * Total Submissions: 590.6K
 * Testcase Example:  '5'
 *
 * Given a non-negative integer numRows, generate the first numRows of Pascal's
 * triangle.
 * 
 * 
 * In Pascal's triangle, each number is the sum of the two numbers directly
 * above it.
 * 
 * Example:
 * 
 * 
 * Input: 5
 * Output:
 * [
 * ⁠    [1],
 * ⁠   [1,1],
 * ⁠  [1,2,1],
 * ⁠ [1,3,3,1],
 * ⁠[1,4,6,4,1]
 * ]
 * 
 * 
 */
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> result{ {1}, {1, 1} };
        if (numRows == 0)result.clear();
        else if (numRows == 1)result.pop_back();
        std::vector<int> tmp;
        for (int i = 3; i <= numRows; ++i) {
                tmp.resize(i);
                tmp[0] = tmp[i - 1] = 1;
                for (int j = 1; j < (i + 1) / 2; ++j) {
                    tmp[j] = result[i - 2][j - 1] + result[i - 2][j];
                    tmp[i - 1 - j] = tmp[j];
                }
                result.push_back(tmp);
                tmp.clear();
        }
        return result;
    }
    // √ Accepted
    // √ 15/15 cases passed (0 ms)
    // √ Your runtime beats 100 % of cpp submissions
    // √ Your memory usage beats 70.37 % of cpp submissions (8.8 MB)
};

