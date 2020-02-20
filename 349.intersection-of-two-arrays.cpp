/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 *
 * https://leetcode.com/problems/intersection-of-two-arrays/description/
 *
 * algorithms
 * Easy (56.65%)
 * Likes:    496
 * Dislikes: 910
 * Total Accepted:    262.8K
 * Total Submissions: 458.7K
 * Testcase Example:  '[1,2,2,1]\n[2,2]'
 *
 * Given two arrays, write a function to compute their intersection.
 * 
 * Example 1:
 * 
 * 
 * Input: nums1 = [1,2,2,1], nums2 = [2,2]
 * Output: [2]
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
 * Output: [9,4]
 * 
 * 
 * Note:
 * 
 * 
 * Each element in the result must be unique.
 * The result can be in any order.
 * 
 * 
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::set<int> result_set;
        std::set<int> nums1_set(nums1.begin(), nums1.end());
        for(auto num : nums2){
            if(nums1_set.find(num)!=nums1_set.end()){
                result_set.insert(num);
            }
        }
        return vector<int>(result_set.begin(), result_set.end());
    }
    // 60/60 cases passed (8 ms)
    // Your runtime beats 74.74 % of cpp submissions
    // Your memory usage beats 40 % of cpp submissions (9.5 MB)
};
// @lc code=end

