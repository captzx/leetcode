#include "common.h"
#include "merge.h"

/*
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:
The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.

Example:
Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3
Output: [1,2,2,3,5,6]
*/

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