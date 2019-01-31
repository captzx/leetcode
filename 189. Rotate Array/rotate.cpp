#include "common.h"
#include "rotate.h"


void rotate(std::vector<int>& nums, int k) {
	size_t size = nums.size();
	for (int i = 0; i < k; ++i) {
		int tmp = nums[size - 1];
		for (size_t j = size-1; j > 0; --j) {
			nums[j] = nums[j - 1];
		}
		nums[0] = tmp;
	}
}
void rotate1s(std::vector<int>& nums, int k) {
	if (k % nums.size() == 0)return;
	size_t size = nums.size();
	std::reverse(nums.begin(), nums.begin() - k + size);
	std::reverse(nums.begin() - k + size, nums.end());
	std::reverse(nums.begin(), nums.end());
}

void rotate1t(std::vector<int>& nums, int k) {
	if (k % nums.size() == 0)return;
	std::reverse(nums.begin(), nums.end());
	std::reverse(nums.begin(), nums.begin() + k);
	std::reverse(nums.begin() + k, nums.end());
}