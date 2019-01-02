#include "common.h"
#include "climbStairs.h"

int climbStairs(int n) {
	if (n < 3) return n;
	int res = 0, step1 = 1, step2 = 2;
	for (int i = 3; i <= n; ++i) {
		res = step1 + step2;
		step1 = step2;
		step2 = res;
	}
	return res;
}
