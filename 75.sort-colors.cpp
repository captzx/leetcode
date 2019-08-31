/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 *
 * https://leetcode.com/problems/sort-colors/description/
 *
 * algorithms
 * Medium (43.02%)
 * Likes:    1898
 * Dislikes: 169
 * Total Accepted:    349.1K
 * Total Submissions: 810.7K
 * Testcase Example:  '[2,0,2,1,1,0]'
 *
 * Given an array with n objects colored red, white or blue, sort them in-place
 * so that objects of the same color are adjacent, with the colors in the order
 * red, white and blue.
 * 
 * Here, we will use the integers 0, 1, and 2 to represent the color red,
 * white, and blue respectively.
 * 
 * Note: You are not suppose to use the library's sort function for this
 * problem.
 * 
 * Example:
 * 
 * 
 * Input: [2,0,2,1,1,0]
 * Output: [0,0,1,1,2,2]
 * 
 * Follow up:
 * 
 * 
 * A rather straight forward solution is a two-pass algorithm using counting
 * sort.
 * First, iterate the array counting number of 0's, 1's, and 2's, then
 * overwrite array with total number of 0's, then 1's and followed by 2's.
 * Could you come up with a one-pass algorithm using only constant space?
 * 
 * 
 */
class Solution {
public:
    int swapColor(int f, int b, int fv, int bv, std::vector<int>& nums) {
        while (f < b) {
            if (nums[f] == fv && nums[b] == bv) std::swap(nums[f++], nums[b--]);
            else if (nums[f] != fv)++f;
            else if (nums[b] != bv)--b;
        }
        return f;
    }
    void sortColors(std::vector<int>& nums) {
        int f = 0, b = nums.size() - 1;
        int mid = swapColor(f, b, 2, 0, nums);
        swapColor(f, mid, 1, 0, nums);
        swapColor(mid, b, 2, 1, nums);
    }
    // √ Accepted
    // √ 87/87 cases passed (4 ms)
    // √ Your runtime beats 69.16 % of cpp submissions
    // √ Your memory usage beats 78.95 % of cpp submissions (8.6 MB)
};

