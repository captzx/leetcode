/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 *
 * https://leetcode.com/problems/contains-duplicate-ii/description/
 *
 * algorithms
 * Easy (35.84%)
 * Likes:    558
 * Dislikes: 688
 * Total Accepted:    213.5K
 * Total Submissions: 595.2K
 * Testcase Example:  '[1,2,3,1]\n3'
 *
 * Given an array of integers and an integer k, find out whether there are two
 * distinct indices i and j in the array such that nums[i] = nums[j] and the
 * absolute difference between i and j is at most k.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: nums = [1,2,3,1], k = 3
 * Output: true
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums = [1,0,1,1], k = 1
 * Output: true
 * 
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: nums = [1,2,3,1,2,3], k = 2
 * Output: false
 * 
 * 
 * 
 * 
 * 
 */
class Solution {
public:
    // bool containsNearbyDuplicate(vector<int>& nums, int k) {
    //     std::map<int, int> numMap;
    //     for (size_t i = 0; i < nums.size(); ++i) {
    //         auto findIt = numMap.find(nums[i]);
    //         if (findIt != numMap.end()) {
    //             if (int(i) - findIt->second > k)
    //                 findIt->second = i;
    //             else 
    //                 return true;
    //         }
    //         else 
    //             numMap[nums[i]] = i;
    //     }
    //     return false;
    //}
    // √ Accepted
    // √ 23/23 cases passed (44 ms)
    // √ Your runtime beats 22.51 % of cpp submissions
    // √ Your memory usage beats 52.94 % of cpp submissions (15.5 MB)

    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        std::map<int, int> num_pos;
        for(size_t pos = 0; pos != nums.size(); ++pos){
            if(num_pos.find(nums[pos]) != num_pos.end()){
                if(pos - num_pos[nums[pos]]  <= k) return true;
                else num_pos[nums[pos]] = pos;
            }
            else num_pos[nums[pos]] = pos;
        }
        return false;
    }
    // √ Accepted
    // √ 23/23 cases passed (40 ms)
    // √ Your runtime beats 30.43 % of cpp submissions
    // √ Your memory usage beats 82.35 % of cpp submissions (15.3 MB)
};

