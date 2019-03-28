#include "common.h"
#include "tag_vector.h"

int removeDuplicates2(std::vector<int>& nums) {
	if (nums.empty()) return 0;
	int v = nums[0], counter = 1, index = 1;
	for (size_t i = 1; i < nums.size(); ++i) {
		if (nums[i] == v) {
			++counter;
		}
		else {
			counter = 1;
			v = nums[i];
		}

		if (counter == 1 || counter == 2) {
			std::swap(nums[index], nums[i]);
			++index;
		}
	}
	return index;
	// Runtime: 8 ms, faster than 100.00% of C++ online submissions for Remove Duplicates from Sorted Array II.
}


/*
int removeDuplicates(vector<int>& nums) {
	int i = 0;
	for (int n : nums)
	if (i < 2 || n > nums[i-2])
		nums[i++] = n;
	return i;
}
*/