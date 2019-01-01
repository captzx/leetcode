#include "common.h"
#include "majorityElement.h"

/*
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
You may assume that the array is non-empty and the majority element always exist in the array.

Example 1:
Input: [3,2,3]
Output: 3

Example 2:
Input: [2,2,1,1,1,2,2]
Output: 2
*/
// 334
//123456423341
int majorityElement(std::vector<int>& nums) {
	/*std::map<int, int> elementMap;
	for (size_t i = 0; i < nums.size(); ++i) {
		if (elementMap.find(nums[i]) != elementMap.end()) ++elementMap[nums[i]];
		else elementMap[nums[i]] = 1;
	}
	int num = 0, majority = 0;
	for (auto e : elementMap) {
		if (e.second > num) {
			num = e.second;
			majority = e.first;
		}
	}
	return majority;*/
	int result;
	int count = 0;
	int size = nums.size();
	for (int i = 0; i < size; i++) {
		if (count == 0)
		{
			result = nums[i];
			count++;
		}
		else if (result == nums[i])
			count++;
		else
			count--;
	}
	return result;
}