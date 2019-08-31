/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 *
 * https://leetcode.com/problems/combinations/description/
 *
 * algorithms
 * Medium (49.34%)
 * Likes:    895
 * Dislikes: 50
 * Total Accepted:    222.7K
 * Total Submissions: 450.6K
 * Testcase Example:  '4\n2'
 *
 * Given two integers n and k, return all possible combinations of k numbers
 * out of 1 ... n.
 * 
 * Example:
 * 
 * 
 * Input: n = 4, k = 2
 * Output:
 * [
 * ⁠ [2,4],
 * ⁠ [3,4],
 * ⁠ [2,3],
 * ⁠ [1,2],
 * ⁠ [1,3],
 * ⁠ [1,4],
 * ]
 * 
 * 
 */
class Solution {
public:
    // void combine(int n, int k, int start, std::vector<int>& tmp, std::vector<std::vector<int>>& res, const int cn) {
    //     if (k == 0) {
    //         res.push_back(tmp);
    //         return;
    //     }
    //     for (int i = start; i <= cn; ++i) {
    //         tmp.push_back(i);
    //         combine(n - 1, k - 1, i + 1, tmp, res, cn);
    //         tmp.pop_back();
    //     }
    // }
    // std::vector<std::vector<int>> combine(int n, int k) {
    //     std::vector<std::vector<int>> res;
    //     std::vector<int> tmp;
    //     combine(n, k, 1, tmp, res, n);
    //     return res;
    // }
    // √ Accepted
    // √ 27/27 cases passed (84 ms)
    // √ Your runtime beats 65.93 % of cpp submissions
    // √ Your memory usage beats 75 % of cpp submissions (12 MB)

    void backtrack(vector<vector<int>> &res, int start, int end, int k, vector<int> &cur){
        if (k == 0) {
            res.push_back(cur);
            return;
        }
        if (end - start + 1 < k) return;
        for (int i = start; i <= end; i++) {
            cur[k - 1] = i;
            backtrack(res, i + 1, end, k - 1, cur);
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> cur(k, 0);
        backtrack(res, 1, n, k, cur);

        return res;
    }

    // √ Accepted
    // √ 27/27 cases passed (64 ms)
    // √ Your runtime beats 89.77 % of cpp submissions
    // √ Your memory usage beats 95 % of cpp submissions (11.7 MB)
};

