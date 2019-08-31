/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 *
 * https://leetcode.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (44.45%)
 * Likes:    11678
 * Dislikes: 403
 * Total Accepted:    2.1M
 * Total Submissions: 4.6M
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers, return indices of the two numbers such that they
 * add up to a specific target.
 * 
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 * 
 * Example:
 * 
 * 
 * Given nums = [2, 7, 11, 15], target = 9,
 * 
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 * 
 * 
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int,int> map;
        for (size_t i = 0; i < nums.size(); ++i) {
            int need = target - nums[i];
            auto it = map.find(need);
            if (it != map.end()) {
                return std::vector<int>({ it->second, int(i)});
            }
            map[nums[i]] = i;
        }
        return std::vector<int>();
    }
    // √ Accepted
    // √ 29/29 cases passed (8 ms)
    // √ Your runtime beats 92.48 % of cpp submissions
    // √ Your memory usage beats 46.87 % of cpp submissions (10.2 MB)
};

