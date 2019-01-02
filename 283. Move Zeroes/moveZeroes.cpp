#include "common.h"
#include "moveZeroes.h"

/*
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.
*/
void moveZeroes(std::vector<int>& nums) {
	int zeroPos = -1;
	for (size_t i = 0; i < nums.size(); ++i) {
		if (zeroPos == -1 && nums[i] == 0) {
			zeroPos = i;
			continue;
		}
		if (zeroPos != -1 && nums[i] != 0)std::swap(nums[i], nums[zeroPos++]);
	}
}