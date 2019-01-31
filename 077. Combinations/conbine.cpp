#include "common.h"
#include "combine.h"

void combine(int n, int k, int start, std::vector<int>& tmp, std::vector<std::vector<int>>& res, const int cn) {
	if (k == 0) {
		res.push_back(tmp);
		return;
	}
	for (int i = start; i <= cn; ++i) {
		tmp.push_back(i);
		combine(n - 1, k - 1, i + 1, tmp, res, cn);
		tmp.pop_back();
	}
}
std::vector<std::vector<int>> combine(int n, int k) {
	std::vector<std::vector<int>> res;
	std::vector<int> tmp;
	combine(n, k, 1, tmp, res, n);
	return res;
}

/*
 void backtrack(vector<vector<int>> &res, int start, int end, int k, vector<int> &cur){
     if (k == 0) {
         res.push_back(cur);
         return;
     }
     if (end - start + 1 < k) return;
     for (int i = start; i <= end; i++) {
         cur[k - 1] = i;
         backtrack(res, i + 1, end, k - 1, cur);
     }
 }

 vector<vector<int>> combine(int n, int k) {
     vector<vector<int>> res;
     vector<int> cur(k, 0);
     backtrack(res, 1, n, k, cur);

     return res;
 }
*/
