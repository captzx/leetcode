/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 *
 * https://leetcode.com/problems/add-binary/description/
 *
 * algorithms
 * Easy (40.23%)
 * Likes:    1119
 * Dislikes: 213
 * Total Accepted:    331.7K
 * Total Submissions: 823.2K
 * Testcase Example:  '"11"\n"1"'
 *
 * Given two binary strings, return their sum (also a binary string).
 * 
 * The input strings are both non-empty and contains only characters 1 or 0.
 * 
 * Example 1:
 * 
 * 
 * Input: a = "11", b = "1"
 * Output: "100"
 * 
 * Example 2:
 * 
 * 
 * Input: a = "1010", b = "1011"
 * Output: "10101"
 * 
 */
class Solution {
public:
    string addBinary(string a, string b) {
        int c = 0;
        string result;
        auto aend = a.rbegin();
        auto bend = b.rbegin();
        while(aend != a.rend() || bend != b.rend() || c != 0){
            int sum = c;
            if(aend != a.rend()) {
                sum += *aend - '0';
                ++aend;
            }
            if(bend != b.rend()) {
                sum += *bend - '0';
                ++bend;
            }

            int val = sum % 2;
            c = sum > 1? 1:0;
            result.push_back(val + '0');\
        }
        std::reverse(result.begin(), result.end());
        return result;
    }
    // √ Accepted
    // √ 294/294 cases passed (4 ms)
    // √ Your runtime beats 80.29 % of cpp submissions
    // √ Your memory usage beats 94.55 % of cpp submissions (8.5 MB)
};

