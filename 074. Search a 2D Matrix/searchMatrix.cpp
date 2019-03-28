#include "common.h"
#include "tag_vector.h"

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
	if (matrix.empty() || matrix[0].empty()) return false;

	int row = matrix.size(), col = matrix[0].size();
	int rfirst = 0, rlast = row - 1;
	int cfirst = 0, clast = col - 1;

	while (rfirst < rlast) {
		int mid = rfirst + (rlast - rfirst) / 2;
		if (matrix[mid][0] < target) {
			if (matrix[mid][clast] < target) rfirst = mid + 1;
			else if (matrix[mid][clast] > target) { rfirst = mid; break; }
			else return true;
		}
		else if (matrix[mid][0] > target)	rlast = mid - 1;
		else return true;
	}

	while (cfirst < clast) {
		int mid = cfirst + (clast - cfirst) / 2;
		if (matrix[rfirst][mid] < target) cfirst = mid + 1;
		else if (matrix[rfirst][mid] > target) clast = mid - 1;
		else return true;
	}

	return matrix[rfirst][cfirst] == target;
}