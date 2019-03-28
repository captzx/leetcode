#include "common.h"
#include "tag_vector.h"

std::vector<int> nextGreaterElement(std::vector<int>& findNums, std::vector<int>& nums) {
	std::map<int, int> NGEMap;
	std::vector<int> result;
	for (size_t i = 0; i < nums.size(); ++i) {
		NGEMap[nums[i]] = -1;
		for (size_t j = i+1; j < nums.size(); ++j) {
			if (nums[j] > nums[i]) {
				NGEMap[nums[i]] = nums[j];
				break;
			}
		}
	}
	for (size_t i = 0; i < findNums.size(); ++i) {
		result.push_back(NGEMap[findNums[i]]);
	}
	return result;
}