#include "common.h"
#include "tag_vector.h"

int maxSubArray(std::vector<int>& nums) {
	int tmp_sum = 0, max_sum = INT_MIN;
	for (auto num : nums) {
		tmp_sum += num;
		max_sum = std::max(max_sum, tmp_sum);
		if (tmp_sum < 0)tmp_sum = 0;
	}
	return max_sum;
}
