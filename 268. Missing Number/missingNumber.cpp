#include "common.h"
#include "missingNumber.h"

/*
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.

Example 1:
Input: [3,0,1]
Output: 2

Example 2:
Input: [9,6,4,2,3,5,7,0,1]
Output: 8

Note:
Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?
*/

int missingNumber(std::vector<int>& nums) {
	size_t size = nums.size();
	int missingSum = 0, Sum = size * (size+1) / 2;
	for (size_t i = 0; i < size; ++i) {
		missingSum += nums[i];
	}
	return Sum - missingSum;
}