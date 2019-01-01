#include "common.h"
#include "containsNearbyDuplicate.h"

/*
Given an array of integers and an integer k, find out whether there are two distinct indices i and j in the array such that nums[i] = nums[j] and the absolute difference between i and j is at most k.

Example 1:
Input: nums = [1,2,3,1], k = 3
Output: true

Example 2:
Input: nums = [1,0,1,1], k = 1
Output: true

Example 3:
Input: nums = [1,2,3,1,2,3], k = 2
Output: false
*/

bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
	std::map<int, int> numMap;
	for (size_t i = 0; i < nums.size(); ++i) {
		auto findIt = numMap.find(nums[i]);
		if (findIt != numMap.end()) {
			if (int(i) - findIt->second > k)
				findIt->second = i;
			else 
				return true;
		}
		else 
			numMap[nums[i]] = i;
	}
	return false;
}