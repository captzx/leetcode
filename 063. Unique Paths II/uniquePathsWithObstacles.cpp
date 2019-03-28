#include "common.h"
#include "tag_vector.h"

int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid) {
	auto row = obstacleGrid.size();
	auto col = obstacleGrid[0].size();
	if (obstacleGrid[row - 1][col - 1] == 1)return 0;

	bool flag = false;
	for (int i = row - 1; i >= 0; --i) {
		if (obstacleGrid[i][col - 1] == 1) {
			obstacleGrid[i][col - 1] = 0;
			flag = true;
		}
		else {
			flag ? obstacleGrid[i][col - 1] = 0 : obstacleGrid[i][col - 1] = 1;
		}
	}

	flag = false;
	for (int i = col - 2; i >= 0; --i) {
		if (obstacleGrid[row - 1][i] == 1) {
			obstacleGrid[row - 1][i] = 0;
			flag = true;
		}
		else {
			flag ? obstacleGrid[row - 1][i] = 0 : obstacleGrid[row - 1][i] = 1;
		}
	}

	for (int i = row - 2; i >= 0; --i) {
		for (int j = col - 2; j >= 0; --j) {
			if (obstacleGrid[i][j] == 1) {
				obstacleGrid[i][j] = 0;
			}
			else obstacleGrid[i][j] = obstacleGrid[i + 1][j] + obstacleGrid[i][j + 1];
		}
	}
	return obstacleGrid[0][0];
}