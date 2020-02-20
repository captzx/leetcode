/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 *
 * https://leetcode.com/problems/next-permutation/description/
 *
 * algorithms
 * Medium (31.27%)
 * Likes:    2699
 * Dislikes: 926
 * Total Accepted:    317.9K
 * Total Submissions: 1M
 * Testcase Example:  '[1,2,3]'
 *
 * Implement next permutation, which rearranges numbers into the
 * lexicographically next greater permutation of numbers.
 * 
 * If such arrangement is not isible, it must rearrange it as the lowest
 * isible order (ie, sorted in ascending order).
 * 
 * The replacement must be in-place and use only constant extra memory.
 * 
 * Here are some examples. Inputs are in the left-hand column and its
 * corresponding outputs are in the right-hand column.
 * 
 * 1,2,3 → 1,3,2
 * 3,2,1 → 1,2,3
 * 1,1,5 → 1,5,1
 * 
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      const size_t lastpos = nums.size() - 1;
      int& lastvalue = nums[lastpos];

      for (size_t pos = lastpos; pos > 0; --pos) {
            if (nums[pos - 1] >= lastvalue) {
                for(size_t i = pos - 1; i < lastpos; ++i)
                    std::swap(nums[i], nums[i+1]);
            }
            else {
                for (size_t i = pos; i <= lastpos; ++i) {
                    if (nums[pos - 1] < nums[i]) {
                        std::swap(nums[pos - 1], nums[i]);
                        break;
                    }
                }
                break;
            }
	    }
       // 265/265 cases passed (8 ms)
       // Your runtime beats 78.17 % of cpp submissions
       // Your memory usage beats 79.57 % of cpp submissions (8.7 MB)
    }
};
// @lc code=end

