#include "common.h"
#include "twoSum.h"
/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/
std::vector<int> twoSum(std::vector<int>& nums, int target) {
	std::map<int,int> map;
	for (size_t i = 0; i < nums.size(); ++i) {
		int need = target - nums[i];
		auto it = map.find(need);
		if (it != map.end()) {
			return std::vector<int>({ it->second, int(i)});
		}
		map[nums[i]] = i;
	}
	return std::vector<int>();
}
