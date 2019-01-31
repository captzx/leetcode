#include "common.h"
#include "twoSum.h"

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
