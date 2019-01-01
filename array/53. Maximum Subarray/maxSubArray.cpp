#include "common.h"
#include "maxSubArray.h"

/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:
Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Follow up:
If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/

int maxSubArray(std::vector<int>& nums) {
	int tmp_sum = 0, max_sum = INT_MIN;
	for (auto num : nums) {
		tmp_sum += num;
		max_sum = std::max(max_sum, tmp_sum);
		if (tmp_sum < 0)tmp_sum = 0;
	}
	return max_sum;
}
