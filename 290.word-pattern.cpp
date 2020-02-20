/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 *
 * https://leetcode.com/problems/word-pattern/description/
 *
 * algorithms
 * Easy (35.47%)
 * Likes:    780
 * Dislikes: 104
 * Total Accepted:    158.2K
 * Total Submissions: 442.8K
 * Testcase Example:  '"abba"\n"dog cat cat dog"'
 *
 * Given a pattern and a string str, find if str follows the same pattern.
 * 
 * Here follow means a full match, such that there is a bijection between a
 * letter in pattern and a non-empty word in str.
 * 
 * Example 1:
 * 
 * 
 * Input: pattern = "abba", str = "dog cat cat dog"
 * Output: true
 * 
 * Example 2:
 * 
 * 
 * Input:pattern = "abba", str = "dog cat cat fish"
 * Output: false
 * 
 * Example 3:
 * 
 * 
 * Input: pattern = "aaaa", str = "dog cat cat dog"
 * Output: false
 * 
 * Example 4:
 * 
 * 
 * Input: pattern = "abba", str = "dog dog dog dog"
 * Output: false
 * 
 * Notes:
 * You may assume pattern contains only lowercase letters, and str contains
 * lowercase letters that may be separated by a single space.
 * 
 */

// @lc code=start
class Solution {
public:
    bool wordPattern(string pattern, string str) {
        	if (pattern.empty() && str.empty()) return true;

            size_t i = 0;
            map<string, char> substrdict;
            string strpattern;
            istringstream iss(str);
            while (!iss.eof()){
                if (i >= pattern.size()) return false; // check "a" "a a"

                string substr;
                getline(iss, substr, ' ');
                if (substrdict.find(substr) == substrdict.end()) {
                   for(auto sppair : substrdict){
                       if(sppair->second == pattern[i]) return false; // check "aa" "a b"
                   }

                   substrdict[substr] = pattern[i];
                }

                strpattern.push_back(substrdict[substr]);
                ++i;
            }

            if(pattern != strpattern) return false;

            return true;
    }
    // Accepted
    // 33/33 cases passed (8 ms)
    // Runtime: 4 ms, faster than 56.84% of C++ online submissions for Word Pattern.
    // Memory Usage: 8.8 MB, less than 71.43% of C++ online submissions for Word Pattern.
};
// @lc code=end

