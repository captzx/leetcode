#include "common.h"
#include "tag_vector.h"

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
	int mi = m - 1, ni = n - 1, tail = m - 1 + n;
	while (mi >= 0 && ni >= 0) {
		if (nums1[mi] >= nums2[ni])nums1[tail--] = nums1[mi--];
		else nums1[tail--] = nums2[ni--];
	}  
	if (mi <= 0) {
		for (int i = 0; i <= ni; ++i) {
			nums1[i] = nums2[i];
		}
	}
}