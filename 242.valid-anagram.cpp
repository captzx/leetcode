/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 *
 * https://leetcode.com/problems/valid-anagram/description/
 *
 * algorithms
 * Easy (53.24%)
 * Likes:    810
 * Dislikes: 116
 * Total Accepted:    382.3K
 * Total Submissions: 718K
 * Testcase Example:  '"anagram"\n"nagaram"'
 *
 * Given two strings s and t , write a function to determine if t is an anagram
 * of s.
 * 
 * Example 1:
 * 
 * 
 * Input: s = "anagram", t = "nagaram"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "rat", t = "car"
 * Output: false
 * 
 * 
 * Note:
 * You may assume the string contains only lowercase alphabets.
 * 
 * Follow up:
 * What if the inputs contain unicode characters? How would you adapt your
 * solution to such case?
 * 
 */
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        std::map<char, int> cc;
        for(size_t i = 0; i< s.size(); ++i){
            ++cc[s[i]];
        }
        for(size_t i = 0; i< t.size(); ++i){
            --cc[t[i]];
            if(cc[t[i]] < 0) return false;
        }
        return true;
    }
    // √ Accepted
    // √ 34/34 cases passed (20 ms)
    // √ Your runtime beats 38.67 % of cpp submissions
    // √ Your memory usage beats 71.64 % of cpp submissions (9.5 MB)
};

