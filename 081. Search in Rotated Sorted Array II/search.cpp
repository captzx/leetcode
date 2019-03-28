#include "common.h"
#include "tag_vector.h"

bool search(std::vector<int>& nums, int target) {
	if (nums.empty())return false;
	int first = 0, last = nums.size() - 1;
	while (first < last) {
		if (nums[first] == target)return true;
		else ++first;
		if (nums[last] == target)return true;
		else --last;
	}
	return nums[first] == target;
	// Runtime: 4 ms, faster than 98.92% of C++ online submissions for Search in Rotated Sorted Array II.
}