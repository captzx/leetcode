/*
 * @lc app=leetcode id=303 lang=cpp
 *
 * [303] Range Sum Query - Immutable
 *
 * https://leetcode.com/problems/range-sum-query-immutable/description/
 *
 * algorithms
 * Easy (39.66%)
 * Likes:    567
 * Dislikes: 859
 * Total Accepted:    159.5K
 * Total Submissions: 396.1K
 * Testcase Example:  '["NumArray","sumRange","sumRange","sumRange"]\n[[[-2,0,3,-5,2,-1]],[0,2],[2,5],[0,5]]'
 *
 * Given an integer array nums, find the sum of the elements between indices i
 * and j (i ≤ j), inclusive.
 * 
 * Example:
 * 
 * Given nums = [-2, 0, 3, -5, 2, -1]
 * 
 * sumRange(0, 2) -> 1
 * sumRange(2, 5) -> -1
 * sumRange(0, 5) -> -3
 * 
 * 
 * 
 * Note:
 * 
 * You may assume that the array does not change.
 * There are many calls to sumRange function.
 * 
 * 
 */

// @lc code=start
class NumArray {
private:
    vector<int> _nums;    
public:
    NumArray(vector<int>& nums) {
        _nums = std::move(nums);
    }
    
    int sumRange(int i, int j) {
        if(i < 0) i = 0;
        if(j < 0) j = 0;
        if(i > j) i = j;
        if(i > _nums.size()) i = _nums.size();
        if(j > _nums.size()) j = _nums.size();

        int result = 0;
        while(i <= j) result += _nums[i++];
        return result;
    }
    // Accepted
    // 16/16 cases passed (164 ms)
    // Your runtime beats 17.08 % of cpp submissions
    // Your memory usage beats 96.55 % of cpp submissions (17.2 MB)
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
// @lc code=end

