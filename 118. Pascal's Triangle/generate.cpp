#include "common.h"
#include "tag_vector.h"

std::vector<std::vector<int>> generate(int numRows) {
	std::vector<std::vector<int>> result{ {1}, {1, 1} };
	if (numRows == 0)result.clear();
	else if (numRows == 1)result.pop_back();
	std::vector<int> tmp;
	for (int i = 3; i <= numRows; ++i) {
			tmp.resize(i);
			tmp[0] = tmp[i - 1] = 1;
			for (int j = 1; j < (i + 1) / 2; ++j) {
				tmp[j] = result[i - 2][j - 1] + result[i - 2][j];
				tmp[i - 1 - j] = tmp[j];
			}
			result.push_back(tmp);
			tmp.clear();
	}
	return result;
}