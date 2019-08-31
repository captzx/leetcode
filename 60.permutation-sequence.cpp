/*
 * @lc app=leetcode id=60 lang=cpp
 *
 * [60] Permutation Sequence
 *
 * https://leetcode.com/problems/permutation-sequence/description/
 *
 * algorithms
 * Medium (33.91%)
 * Likes:    952
 * Dislikes: 249
 * Total Accepted:    148.1K
 * Total Submissions: 436.2K
 * Testcase Example:  '3\n3'
 *
 * The set [1,2,3,...,n] contains a total of n! unique permutations.
 * 
 * By listing and labeling all of the permutations in order, we get the
 * following sequence for n = 3:
 * 
 * 
 * "123"
 * "132"
 * "213"
 * "231"
 * "312"
 * "321"
 * 
 * 
 * Given n and k, return the k^th permutation sequence.
 * 
 * Note:
 * 
 * 
 * Given n will be between 1 and 9 inclusive.
 * Given k will be between 1 and n! inclusive.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: n = 3, k = 3
 * Output: "213"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: n = 4, k = 9
 * Output: "2314"
 * 
 * 
 */
class Solution {
public:
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
    // √ Accepted
    // √ 200/200 cases passed (0 ms)
    // √ Your runtime beats 100 % of cpp submissions
    // √ Your memory usage beats 84.21 % of cpp submissions (8.2 MB)
};

