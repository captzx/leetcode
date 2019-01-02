#include "common.h"
#include "rotate.h"

/*
Given an array, rotate the array to the right by k steps, where k is non-negative.

Example 1:
Input: [1,2,3,4,5,6,7] and k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:
Input: [-1,-100,3,99] and k = 2
Output: [3,99,-1,-100]
Explanation:
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

Note:
Try to come up as many solutions as you can, there are at least 3 different ways to solve this problem.
Could you do it in-place with O(1) extra space?
*/

void rotate(std::vector<int>& nums, int k) {
	size_t size = nums.size();
	for (int i = 0; i < k; ++i) {
		int tmp = nums[size - 1];
		for (size_t j = size-1; j > 0; --j) {
			nums[j] = nums[j - 1];
		}
		nums[0] = tmp;
	}
}
void rotate1s(std::vector<int>& nums, int k) {
	if (k % nums.size() == 0)return;
	size_t size = nums.size();
	std::reverse(nums.begin(), nums.begin() - k + size);
	std::reverse(nums.begin() - k + size, nums.end());
	std::reverse(nums.begin(), nums.end());
}

void rotate1t(std::vector<int>& nums, int k) {
	if (k % nums.size() == 0)return;
	std::reverse(nums.begin(), nums.end());
	std::reverse(nums.begin(), nums.begin() + k);
	std::reverse(nums.begin() + k, nums.end());
}