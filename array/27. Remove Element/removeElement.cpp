#include "common.h"
#include "removeElement.h"

/*
Given an array nums and a value val, remove all instances of that value in-place and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
The order of elements can be changed. It doesn't matter what you leave beyond the new length.

Example 1:
Given nums = [3,2,2,3], val = 3,
Your function should return length = 2, with the first two elements of nums being 2.
It doesn't matter what you leave beyond the returned length.

Example 2:
Given nums = [0,1,2,2,3,0,4,2], val = 2,
Your function should return length = 5, with the first five elements of nums containing 0, 1, 3, 0, and 4.
Note that the order of those five elements can be arbitrary.
It doesn't matter what values are set beyond the returned length.
*/
int removeElement(std::vector<int>& nums, int val) {
	if (nums.empty())return 0;
	// 两个指向数组尾部的指针，frontit向前迭代，backit记录最后一个与val不同的值的位置
	auto frontit = nums.end() - 1, backit = nums.end() - 1;
	while (frontit != nums.begin()) {
		// 当frontit指向的值与val相同时，则用backit的值替换之，backit向前迭代一步
		if (*frontit == val) *frontit-- = *backit--;
		else --frontit;
	}
	// 此时frontit = nums.begin()未处理，因此单独处理
	if (*frontit == val) {
		if (frontit == backit)
			return 0;
		else
			*frontit = *backit--;
	}
	return backit - frontit + 1;
}