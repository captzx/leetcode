#include "common.h"
#include "tag_vector.h"

int missingNumber(std::vector<int>& nums) {
	size_t size = nums.size();
	int missingSum = 0, Sum = size * (size+1) / 2;
	for (size_t i = 0; i < size; ++i) {
		missingSum += nums[i];
	}
	return Sum - missingSum;
}