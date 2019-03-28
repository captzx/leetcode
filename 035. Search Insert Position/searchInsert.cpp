#include "common.h"
#include "tag_vector.h"

int searchInsert(std::vector<int>& nums, int target) {
	int front = 0, back = nums.size() - 1;
	while (front < back) {
		auto mid = front + (back - front) / 2;
		if (nums[mid] == target) return mid;
		else if (nums[mid] > target) back = mid - 1;
		else front = mid + 1;
	}
	return target <= nums[front] ? front : front + 1;
}