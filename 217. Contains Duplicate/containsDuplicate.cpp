#include "common.h"
#include "containsDuplicate.h"

bool containsDuplicate(std::vector<int>& nums) {
	std::map<int, bool> numMap;
	for (size_t i = 0; i < nums.size(); ++i) {
		if (numMap.find(nums[i]) != numMap.end())return true;
		else numMap[nums[i]] = true;
	}
	return false;
}