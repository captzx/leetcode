/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 *
 * https://leetcode.com/problems/search-a-2d-matrix/description/
 *
 * algorithms
 * Medium (35.14%)
 * Likes:    977
 * Dislikes: 116
 * Total Accepted:    243.5K
 * Total Submissions: 692.7K
 * Testcase Example:  '[[1,3,5,7],[10,11,16,20],[23,30,34,50]]\n3'
 *
 * Write an efficient algorithm that searches for a value in an m x n matrix.
 * This matrix has the following properties:
 * 
 * 
 * Integers in each row are sorted from left to right.
 * The first integer of each row is greater than the last integer of the
 * previous row.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input:
 * matrix = [
 * ⁠ [1,   3,  5,  7],
 * ⁠ [10, 11, 16, 20],
 * ⁠ [23, 30, 34, 50]
 * ]
 * target = 3
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input:
 * matrix = [
 * ⁠ [1,   3,  5,  7],
 * ⁠ [10, 11, 16, 20],
 * ⁠ [23, 30, 34, 50]
 * ]
 * target = 13
 * Output: false
 * 
 */
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int row = matrix.size(), col = matrix[0].size();
        int rfirst = 0, rlast = row - 1;
        int cfirst = 0, clast = col - 1;

        while (rfirst < rlast) {
            int mid = rfirst + (rlast - rfirst) / 2;
            if (matrix[mid][0] < target) {
                if (matrix[mid][clast] < target) rfirst = mid + 1;
                else if (matrix[mid][clast] > target) { rfirst = mid; break; }
                else return true;
            }
            else if (matrix[mid][0] > target)	rlast = mid - 1;
            else return true;
        }

        while (cfirst < clast) {
            int mid = cfirst + (clast - cfirst) / 2;
            if (matrix[rfirst][mid] < target) cfirst = mid + 1;
            else if (matrix[rfirst][mid] > target) clast = mid - 1;
            else return true;
        }

        return matrix[rfirst][cfirst] == target;
    }
    // √ Accepted
    // √ 136/136 cases passed (12 ms)
    // √ Your runtime beats 50.65 % of cpp submissions
    // √ Your memory usage beats 100 % of cpp submissions (9.5 MB)
};

