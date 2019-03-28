#include "common.h"
#include "tag_vector.h"

int swapColor(int f, int b, int fv, int bv, std::vector<int>& nums) {
	while (f < b) {
		if (nums[f] == fv && nums[b] == bv) std::swap(nums[f++], nums[b--]);
		else if (nums[f] != fv)++f;
		else if (nums[b] != bv)--b;
	}
	return f;
}
void sortColors(std::vector<int>& nums) {
	int f = 0, b = nums.size() - 1;
	int mid = swapColor(f, b, 2, 0, nums);
	swapColor(f, mid, 1, 0, nums);
	swapColor(mid, b, 2, 1, nums);
	// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sort Colors.
}