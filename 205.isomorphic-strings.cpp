/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 *
 * https://leetcode.com/problems/isomorphic-strings/description/
 *
 * algorithms
 * Easy (37.99%)
 * Likes:    853
 * Dislikes: 244
 * Total Accepted:    223K
 * Total Submissions: 586.4K
 * Testcase Example:  '"egg"\n"add"'
 *
 * Given two strings s and t, determine if they are isomorphic.
 * 
 * Two strings are isomorphic if the characters in s can be replaced to get t.
 * 
 * All occurrences of a character must be replaced with another character while
 * preserving the order of characters. No two characters may map to the same
 * character but a character may map to itself.
 * 
 * Example 1:
 * 
 * 
 * Input: s = "egg", t = "add"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: s = "foo", t = "bar"
 * Output: false
 * 
 * Example 3:
 * 
 * 
 * Input: s = "paper", t = "title"
 * Output: true
 * 
 * Note:
 * You may assume both s and t have the same length.
 * 
 */
class Solution {
public:
    // bool isIsomorphic(string s, string t) {
    //     if (s.size() != t.size())return false;
    //     std::map<char, char> charMap;
    //     for (size_t i = 0; i < s.size();++i) {
    //         if (charMap.find(s[i]) == charMap.end()) {
    //             for (auto c : charMap) {
    //                 if (c.second == t[i])return false;	// No two characters may map to the same character
    //             }
    //             charMap[s[i]] = t[i];
    //         }
    //         else {
    //             if (charMap[s[i]] != t[i])return false;
    //         }
    //     }
    //     return true;
    // }
    // √ Accepted
    // √ 30/30 cases passed (12 ms)
    // √ Your runtime beats 51.19 % of cpp submissions
    // √ Your memory usage beats 94 % of cpp submissions (9 MB)
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;

        char s_map[127] = {0}, t_map[127] = {0};

        for(size_t i = 0; i< s.size(); ++i){
            if(s_map[s[i]] != t_map[t[i]]) return false;

            s_map[s[i]] = i + 1;
            t_map[t[i]] = i + 1;
        }	

        return true;
    }
    // √ Accepted
    // √ 30/30 cases passed (4 ms)
    // √ Your runtime beats 99.64 % of cpp submissions
    // √ Your memory usage beats 94 % of cpp submissions (9 MB)
};

