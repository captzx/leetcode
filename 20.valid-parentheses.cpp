/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 *
 * https://leetcode.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (37.10%)
 * Likes:    3281
 * Dislikes: 154
 * Total Accepted:    676.3K
 * Total Submissions: 1.8M
 * Testcase Example:  '"()"'
 *
 * Given a string containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 * 
 * An input string is valid if:
 * 
 * 
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 * 
 * 
 * Note that an empty string is also considered valid.
 * 
 * Example 1:
 * 
 * 
 * Input: "()"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "()[]{}"
 * Output: true
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: "(]"
 * Output: false
 * 
 * 
 * Example 4:
 * 
 * 
 * Input: "([)]"
 * Output: false
 * 
 * 
 * Example 5:
 * 
 * 
 * Input: "{[]}"
 * Output: true
 * 
 * 
 */
class Solution {
public:
    bool isValid(string s) {
        std::map<char, char> bracketMap({ { '{','}' }, { '(',')' }, { '[', ']' } });
        std::stack<char> bracketStack;
        for (auto c : s) {
            if (bracketMap.find(c) != bracketMap.end()) {
                bracketStack.push(c);
                continue;
            }
            else if(bracketStack.empty())return false;
            else {
                auto positive = bracketStack.top();
                if (bracketMap[positive] == c) bracketStack.pop();
                else return false;
            }
        }
        return bracketStack.empty();
    }
    // √ Accepted
    // √ 76/76 cases passed (0 ms)
    // √ Your runtime beats 100 % of cpp submissions
    // √ Your memory usage beats 20.93 % of cpp submissions (8.7 MB)
};

