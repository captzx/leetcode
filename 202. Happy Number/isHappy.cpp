#include "common.h"
#include "isHappy.h"

bool isHappy(int n) {
	std::map<int, bool> sumMap;
	while (n != 1) {
		int sum = 0;
		int digit = n;
		while (digit / 10 || digit % 10) {
			sum += (digit % 10)*(digit % 10);
			digit /= 10;
		}
		if (sumMap.find(sum) == sumMap.end()) {
			sumMap[sum] = true;
		}
		else {
			return false;
		}
		n = sum;
	}
	return true;
}