#include "common.h"
#include "tag_vector.h"


int c(int m, int n) {
	// c(m,m)=c(m,0)=1 c(0,0)=1
	if (n == m || n == 0)return 1;
	long long t = 1, b = 1;
	for (int i = 1; i <= n; ++i) {
		t *= (m-i+1);
		b *= i;
		while (t % 2 == 0 && b % 2 == 0) {
			t /= 2;
			b /= 2;
		}
		while (t % 3 == 0 && b % 3 == 0) {
			t /= 3;
			b /= 3;
		}
	}
	return int(t / b);
}

std::vector<int> getRow(int rowIndex) {
	std::vector<int> result(rowIndex + 1, 1);
	for (int i = 0; i <= (rowIndex + 1) / 2; ++i) {
		result[i] = c(rowIndex, i);
		result[rowIndex - i] = result[i];
	}
	return result;
	// Runtime: 4 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle II.
	// Memory Usage : 8.5 MB, less than 63.03% of C++ online submissions for Pascal's Triangle II.
}