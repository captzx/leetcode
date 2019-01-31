#include "common.h"
#include "removeDuplicates.h"

int removeDuplicates(std::vector<int>& nums) {
	if (nums.empty()) return 0;
	// 设置两个指针frontit，backit指向数组头部，backit向前遍历数组  
	auto frontit = nums.begin(), backit = nums.begin();
	while(backit != nums.end()) {
		if (*frontit == *backit) ++backit;
		// 若backit指向的值与frontit指向的值不同，则frontit向后迭代一次，并将其制设置为backit所指向的值
		else *(++frontit) = *backit;
	}
	return frontit - nums.begin() + 1;
}