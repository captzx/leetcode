/*
 * @lc app=leetcode id=387 lang=cpp
 *
 * [387] First Unique Character in a String
 *
 * https://leetcode.com/problems/first-unique-character-in-a-string/description/
 *
 * algorithms
 * Easy (50.65%)
 * Likes:    1237
 * Dislikes: 87
 * Total Accepted:    333.5K
 * Total Submissions: 656.3K
 * Testcase Example:  '"leetcode"'
 *
 * 
 * Given a string, find the first non-repeating character in it and return it's
 * index. If it doesn't exist, return -1.
 * 
 * Examples:
 * 
 * s = "leetcode"
 * return 0.
 * 
 * s = "loveleetcode",
 * return 2.
 * 
 * 
 * 
 * 
 * Note: You may assume the string contain only lowercase letters.
 * 
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        std::map<char, int> char_num_map;
        for(auto c : s) ++char_num_map[c];
        for(size_t i = 0; i < s.size(); ++i) {
            if(char_num_map[s[i]] == 1) return i;
        }
        return -1;
    }
    // 104/104 cases passed (76 ms)
    // Your runtime beats 21.57 % of cpp submissions
    // Your memory usage beats 34.38 % of cpp submissions (13.1 MB)
};
// @lc code=end

