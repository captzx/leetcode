#include "common.h"
#include "containsNearbyDuplicate.h"

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