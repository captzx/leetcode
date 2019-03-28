#include "common.h"
#include "tag_vector.h"

std::vector<int> plusOne(std::vector<int>& digits) {
	for (int i = digits.size() - 1; i >= 0; --i) {
		if (digits[i] <= 8) {
			digits[i] += 1;
			break;
		}
		else {
			if (i != 0)digits[i] = 0;
			else {
				digits[i] = 1;
				digits.push_back(0);
			}
		}
	}
	return digits;
}