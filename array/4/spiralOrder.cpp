#include "common.h"
#include "spiralOrder.h"

std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
	std::vector<int> result;
	int xmax = matrix.size() - 1, ymax = matrix[0].size() - 1;
	int xmin = 0, ymin = 0;
	int x = 0, y = 0;

	while (xmax >= xmin && ymax >= ymin) {
		if (xmin == xmax && ymin == ymax) {
			result.push_back(matrix[xmin][ymin]);
			return result;
		}
		else {
			for (; y < ymax; ++y)result.push_back(matrix[x][y]);
			for (; x < xmax; ++x)result.push_back(matrix[x][y]);
			for (; y > ymin; --y) { result.push_back(matrix[x][y]); if (x == xmin) break; }
			for (; x > xmin; --x) { result.push_back(matrix[x][y]); if (y == ymin) break; }
		}
		xmax--; ymax--;
		xmin++; ymin++;
		++x; ++y;
	}
	return result;
}