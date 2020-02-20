/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 *
 * https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
 *
 * algorithms
 * Easy (48.99%)
 * Likes:    863
 * Dislikes: 300
 * Total Accepted:    248.3K
 * Total Submissions: 503.4K
 * Testcase Example:  '[1,2,2,1]\n[2,2]'
 *
 * Given two arrays, write a function to compute their intersection.
 * 
 * Example 1:
 * 
 * 
 * Input: nums1 = [1,2,2,1], nums2 = [2,2]
 * Output: [2,2]
 * 
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
 * Output: [4,9]
 * 
 * 
 * Note:
 * 
 * 
 * Each element in the result should appear as many times as it shows in both
 * arrays.
 * The result can be in any order.
 * 
 * 
 * Follow up:
 * 
 * 
 * What if the given array is already sorted? How would you optimize your
 * algorithm?
 * What if nums1's size is small compared to nums2's size? Which algorithm is
 * better?
 * What if elements of nums2 are stored on disk, and the memory is limited such
 * that you cannot load all elements into the memory at once?
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::map<int, std::pair<int, int>> num_map;

        for(auto num : nums1) ++num_map[num].first;

        for(auto num : nums2){
            if(num_map.find(num) != num_map.end()) ++num_map[num].second;
            else continue;
        }

        std::vector<int> result;
        for(auto numinfo : num_map){
            result.insert(result.end(), std::min(numinfo.second.first, numinfo.second.second), numinfo.first);
        }
        
        return result;
    }
    // 61/61 cases passed (8 ms)
    // Your runtime beats 74.85 % of cpp submissions
    // Your memory usage beats 51.79 % of cpp submissions (9.4 MB)
};
// @lc code=end

