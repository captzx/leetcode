/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 *
 * https://leetcode.com/problems/move-zeroes/description/
 *
 * algorithms
 * Easy (54.98%)
 * Likes:    2304
 * Dislikes: 83
 * Total Accepted:    514.3K
 * Total Submissions: 935K
 * Testcase Example:  '[0,1,0,3,12]'
 *
 * Given an array nums, write a function to move all 0's to the end of it while
 * maintaining the relative order of the non-zero elements.
 * 
 * Example:
 * 
 * 
 * Input: [0,1,0,3,12]
 * Output: [1,3,12,0,0]
 * 
 * Note:
 * 
 * 
 * You must do this in-place without making a copy of the array.
 * Minimize the total number of operations.
 * 
 */
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroPos = -1;
        for (size_t i = 0; i < nums.size(); ++i) {
            if (zeroPos == -1 && nums[i] == 0) {
                zeroPos = i;
                continue;
            }
            if (zeroPos != -1 && nums[i] != 0)std::swap(nums[i], nums[zeroPos++]);
        }
    }
    // √ Accepted
    // √ 21/21 cases passed (16 ms)
    // √ Your runtime beats 61.18 % of cpp submissions
    // √ Your memory usage beats 100 % of cpp submissions (9.4 MB)
};

