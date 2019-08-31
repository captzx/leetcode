/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 *
 * https://leetcode.com/problems/single-number/description/
 *
 * algorithms
 * Easy (61.20%)
 * Likes:    2791
 * Dislikes: 104
 * Total Accepted:    516.8K
 * Total Submissions: 843.7K
 * Testcase Example:  '[2,2,1]'
 *
 * Given a non-empty array of integers, every element appears twice except for
 * one. Find that single one.
 * 
 * Note:
 * 
 * Your algorithm should have a linear runtime complexity. Could you implement
 * it without using extra memory?
 * 
 * Example 1:
 * 
 * 
 * Input: [2,2,1]
 * Output: 1
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [4,1,2,1,2]
 * Output: 4
 * 
 * 
 */
class Solution {
public:
    // int singleNumber(vector<int>& nums) {
    //     std::map<int,bool> appearMap;
    //     int totalSum = 0, appearSum = 0;
    //     for (auto e : nums) {
    //         if (appearMap.find(e) == appearMap.end()) {
    //             appearMap[e] = true;
    //         }
    //         totalSum += e;
    //     }
    //     for (auto e : appearMap) {
    //         appearSum += e.first;
    //     }
    //     return appearSum*2 - totalSum;
    // }
    // √ Accepted
    // √ 16/16 cases passed (28 ms)
    // √ Your runtime beats 12.68 % of cpp submissions
    // √ Your memory usage beats 12.34 % of cpp submissions (11.8 MB)

    int singleNumber(vector<int>& nums) {
        int res = nums[0];
        for (size_t i = 1; i < nums.size(); i++) 
            res ^= nums[i];
        return res;
    }
    // √ Accepted
    // √ 16/16 cases passed (12 ms)
    // √ Your runtime beats 96.15 % of cpp submissions
    // √ Your memory usage beats 100 % of cpp submissions (9.5 MB)
};

