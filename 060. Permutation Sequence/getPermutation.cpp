#include "common.h"
#include "tag_vector.h"

using namespace std;

int factorial(int n) {
	int res = 1;
	for (int i = n; i > 1; --i) {
		res *= i;
	}
	return res;
}

void getLevelNth(int lv, int k, vector<char>&pick, string& res) {
	if (lv == 1) {
		res.push_back(pick[0]); 
		return;
	}
	int num_per_lv = factorial(lv - 1);
	int cur_lv = (k - 1) / num_per_lv;
	int next_k = (k - cur_lv * num_per_lv) % (num_per_lv + 1);
	res.push_back(pick[cur_lv]);
	pick.erase(pick.begin() + cur_lv);
	getLevelNth(lv - 1, next_k, pick, res);
}
string getPermutation(int n, int k) {
	string res;
	vector<char> pick;
	pick.resize(n);
	for (int i = 1; i <= n; ++i) {
		pick[i - 1] = '0' + i;
	}

	getLevelNth(n, k, pick, res);
	return res;
}