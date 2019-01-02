#include "common.h"
#include "minPathSum.h"

int minPathSum(std::vector<std::vector<int>>& grid) {
	auto row = grid.size();
	auto col = grid[0].size();

	for (auto i = row - 2; i >= 0; --i) {
		grid[i][col - 1] += grid[i + 1][col - 1];
	}

	for (auto i = col - 2; i >= col - 1; --i) {
		grid[row - 1][i] += grid[row - 1][i + 1];
	}

	for (auto i = row - 2; i >= 0; --i) {
		for (auto j = col - 2; j >= 0; --j) {
			grid[i][j] += grid[i + 1][j] < grid[i][j + 1] ? grid[i + 1][j] : grid[i][j + 1];
		}
	}
	return grid[0][0];
}