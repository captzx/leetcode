#include "common.h"
#include "setZeroes.h"

void setZeroes(std::vector<std::vector<int>> &matrix) {
	std::set<int> rowset, colset;
	int row = matrix.size(), col = matrix[0].size();
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			if (matrix[i][j] == 0) {
				rowset.insert(i);
				colset.insert(j);
			}
		}
	}

	for (int x : rowset) {
		for (int i = 0; i < col; ++i) {
			matrix[x][i] = 0;
		}
	}

	for (int y : colset) {
		for (int i = 0; i < row; ++i) {
			matrix[i][y] = 0;
		}
	}
}