/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 *
 * https://leetcode.com/problems/subsets/description/
 *
 * algorithms
 * Medium (54.61%)
 * Likes:    2257
 * Dislikes: 56
 * Total Accepted:    406.2K
 * Total Submissions: 742.7K
 * Testcase Example:  '[1,2,3]'
 *
 * Given a set of distinct integers, nums, return all possible subsets (the
 * power set).
 * 
 * Note: The solution set must not contain duplicate subsets.
 * 
 * Example:
 * 
 * 
 * Input: nums = [1,2,3]
 * Output:
 * [
 * ⁠ [3],
 * [1],
 * [2],
 * [1,2,3],
 * [1,3],
 * [2,3],
 * [1,2],
 * []
 * ]
 * 
 */
class Solution {
public:
    // void combine(const std::vector<int>& nums, int n, int start, std::vector<int>& tmp, std::vector<std::vector<int>>& res) {
    //     if (n == 0) {
    //         res.push_back(tmp);
    //         return;
    //     }
    //     for (size_t i = start; i < nums.size(); ++i) {
    //         tmp.push_back(nums[i]);
    //         combine(nums, n - 1, i + 1, tmp, res);
    //         tmp.pop_back();
    //     }
    // }
    // void subsets(std::vector<int>& nums, std::vector<std::vector<int>>& res) {
    //     std::vector<int> tmp;
    //     for (size_t i = 0; i <= nums.size(); ++i) {
    //         combine(nums, i, 0, tmp, res);
    //     }
    // }
    // std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
    //     std::vector<std::vector<int>> res;
    //     subsets(nums, res);
    //     return res;
    // }
    // √ Accepted
    // √ 10/10 cases passed (8 ms)
    // √ Your runtime beats 56.46 % of cpp submissions
    // √ Your memory usage beats 98.31 % of cpp submissions (8.9 MB)

     void genSubset(vector<vector<int>> &res, vector<int>& nums, vector<int> subset, int pos, int vSize){
        //termination 
        if (pos == vSize) {
            res.push_back(subset);
            return;
        }

        // generate subset without the current element
        genSubset(res, nums, subset, pos+1, vSize);
        //generate the subset with the current element
        subset.push_back(nums[pos]);
        genSubset(res, nums, subset, pos+1, vSize);
    }
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> res;
        vector<int> startingV;
        res.reserve(2>>nums.size());

        genSubset(res, nums, startingV, 0, nums.size());
        return res;
    }
    // √ Accepted
    // √ 10/10 cases passed (16 ms)
    // √ Your runtime beats 8.22 % of cpp submissions
    // √ Your memory usage beats 6.78 % of cpp submissions (17.9 MB)
};

