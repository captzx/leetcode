#include "common.h"
#include "tag_vector.h"

std::vector<std::vector<int>> generateMatrix(int n) {
	std::vector<std::vector<int>> matrix;
	matrix.resize(n);
	for (size_t i = 0; i < matrix.size(); ++i) {
		matrix[i].resize(n);
	}
	int xmax = n - 1, ymax = n - 1;
	int xmin = 0, ymin = 0;
	int x = 0, y = 0;

	int counter = 1;

	while (xmax >= xmin && ymax >= ymin) {
		if (xmin == xmax && ymin == ymax) {
			matrix[x][y] = counter++;
			return matrix;
		}
		else {
			for (; y < ymax; ++y)matrix[x][y] = counter++;
			for (; x < xmax; ++x)matrix[x][y] = counter++;
			for (; y > ymin; --y)matrix[x][y] = counter++;
			for (; x > xmin; --x)matrix[x][y] = counter++;
		}
		xmax--; ymax--;
		xmin++; ymin++;
		++x; ++y;
	}
	return matrix;
}