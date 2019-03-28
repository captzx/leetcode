#include "common.h"
#include "tag_vector.h"

void combine(const std::vector<int>& nums, int n, int start, std::vector<int>& tmp, std::vector<std::vector<int>>& res) {
	if (n == 0) {
		res.push_back(tmp);
		return;
	}
	for (size_t i = start; i < nums.size(); ++i) {
		tmp.push_back(nums[i]);
		combine(nums, n - 1, i + 1, tmp, res);
		tmp.pop_back();
	}
}
void subsets(std::vector<int>& nums, std::vector<std::vector<int>>& res) {
	std::vector<int> tmp;
	for (size_t i = 0; i <= nums.size(); ++i) {
		combine(nums, i, 0, tmp, res);
	}
}
std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
	std::vector<std::vector<int>> res;
	subsets(nums, res);
	return res;
}

//  void genSubset(vector<vector<int>> &res, vector<int>& nums, vector<int> subset, int pos, int vSize){
//         //termination 
//         if (pos == vSize) {
//             res.push_back(subset);
//             return;
//         }

//         // generate subset without the current element
//         genSubset(res, nums, subset, pos+1, vSize);
//         //generate the subset with the current element
//         subset.push_back(nums[pos]);
//         genSubset(res, nums, subset, pos+1, vSize);
//     }

//     vector<vector<int>> subsets(vector<int>& nums) {

//         vector<vector<int>> res;
//         vector<int> startingV;
//         res.reserve(2>>nums.size());

//         genSubset(res, nums, startingV, 0, nums.size());
//         return res;
//     }
// }; 