/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 *
 * https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
 *
 * algorithms
 * Easy (51.16%)
 * Likes:    1041
 * Dislikes: 429
 * Total Accepted:    281.4K
 * Total Submissions: 549.8K
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers that is already sorted in ascending order, find
 * two numbers such that they add up to a specific target number.
 * 
 * The function twoSum should return indices of the two numbers such that they
 * add up to the target, where index1 must be less than index2.
 * 
 * Note:
 * 
 * 
 * Your returned answers (both index1 and index2) are not zero-based.
 * You may assume that each input would have exactly one solution and you may
 * not use the same element twice.
 * 
 * 
 * Example:
 * 
 * 
 * Input: numbers = [2,7,11,15], target = 9
 * Output: [1,2]
 * Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.
 * 
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; numbers[i] <= target / 2; ++i) {
            int second = target - numbers[i];
            int front = i + 1, back = numbers.size() - 1;
            while (front <= back) {
                int mid = front + (back - front) / 2;
                if (numbers[mid] < second)front = mid + 1;
                else if (numbers[mid] > second)back = mid - 1;
                else return std::vector<int>({ i+1,mid+1 });
            }
        }
        return std::vector<int>({});
    }
    // √ Accepted
    // √ 17/17 cases passed (8 ms)
    // √ Your runtime beats 56.85 % of cpp submissions
    // √ Your memory usage beats 100 % of cpp submissions (9.4 MB)
};

