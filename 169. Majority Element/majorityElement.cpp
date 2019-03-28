#include "common.h"
#include "tag_vector.h"

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