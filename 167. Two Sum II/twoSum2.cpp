#include "common.h"
#include "tag_vector.h"

std::vector<int> twoSum2(std::vector<int>& numbers, int target) {
	for (int i = 0; numbers[i] <= target / 2; ++i) {
		int second = target - numbers[i];
		int front = i + 1, back = numbers.size() - 1;
		while (front <= back) {
			int mid = front + (back - front) / 2;
			if (numbers[mid] < second)front = mid + 1;
			else if (numbers[mid] > second)back = mid - 1;
			else return std::vector<int>({ i+1,mid+1 });
		}
	}
	return std::vector<int>({});
}