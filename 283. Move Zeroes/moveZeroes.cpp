#include "common.h"
#include "moveZeroes.h"

void moveZeroes(std::vector<int>& nums) {
	int zeroPos = -1;
	for (size_t i = 0; i < nums.size(); ++i) {
		if (zeroPos == -1 && nums[i] == 0) {
			zeroPos = i;
			continue;
		}
		if (zeroPos != -1 && nums[i] != 0)std::swap(nums[i], nums[zeroPos++]);
	}
}