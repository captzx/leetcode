/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 *
 * https://leetcode.com/problems/contains-duplicate/description/
 *
 * algorithms
 * Easy (53.04%)
 * Likes:    460
 * Dislikes: 563
 * Total Accepted:    379.4K
 * Total Submissions: 714.6K
 * Testcase Example:  '[1,2,3,1]'
 *
 * Given an array of integers, find if the array contains any duplicates.
 * 
 * Your function should return true if any value appears at least twice in the
 * array, and it should return false if every element is distinct.
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,3,1]
 * Output: true
 * 
 * Example 2:
 * 
 * 
 * Input: [1,2,3,4]
 * Output: false
 * 
 * Example 3:
 * 
 * 
 * Input: [1,1,1,3,3,4,3,2,4,2]
 * Output: true
 * 
 */
class Solution {
public:
    // bool containsDuplicate(vector<int>& nums) {
    //     std::map<int, bool> numMap;
    //     for (size_t i = 0; i < nums.size(); ++i) {
    //         if (numMap.find(nums[i]) != numMap.end())return true;
    //         else numMap[nums[i]] = true;
    //     }
    //     return false;
    // }
    // √ Accepted
    // √ 18/18 cases passed (56 ms)
    // √ Your runtime beats 18.39 % of cpp submissions
    // √ Your memory usage beats 71.43 % of cpp submissions (16.5 MB)

    bool containsDuplicate(vector<int>& nums) {
        if(nums.empty()) return false;

        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 1; ++i){
            if(nums[i] == nums[i+1]) return true;
        }

        return false; 
    }
    // √ Accepted
    // √ 18/18 cases passed (28 ms)
    // √ Your runtime beats 96.84 % of cpp submissions
    // √ Your memory usage beats 97.8 % of cpp submissions (11.3 MB)
};

