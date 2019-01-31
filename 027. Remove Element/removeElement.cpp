#include "common.h"
#include "removeElement.h"

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