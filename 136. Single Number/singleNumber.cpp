#include "common.h"
#include "singleNumber.h"

int singleNumber(std::vector<int>& nums) {
	/*std::map<int,bool> appearMap;
	int totalSum = 0, appearSum = 0;
	for (auto e : nums) {
		if (appearMap.find(e) == appearMap.end()) {
			appearMap[e] = true;
		}
		totalSum += e;
	}
	for (auto e : appearMap) {
		appearSum += e.first;
	}
	return appearSum*2 - totalSum;*/
	int res = nums[0];
	for (size_t i = 1; i < nums.size(); i++) 
		res ^= nums[i];
	return res;
}