#include "common.h"
#include "singleNumber.h"

/*
Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:
Input: [2,2,1]
Output: 1

Example 2:
Input: [4,1,2,1,2]
Output: 4
*/

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