/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 *
 * https://leetcode.com/problems/ransom-note/description/
 *
 * algorithms
 * Easy (50.69%)
 * Likes:    370
 * Dislikes: 140
 * Total Accepted:    126.7K
 * Total Submissions: 249.2K
 * Testcase Example:  '"a"\n"b"'
 *
 * 
 * Given an arbitrary ransom note string and another string containing letters
 * from all the magazines, write a function that will return true if the
 * ransom 
 * note can be constructed from the magazines ; otherwise, it will return
 * false. 
 * 
 * 
 * Each letter in the magazine string can only be used once in your ransom
 * note.
 * 
 * 
 * Note:
 * You may assume that both strings contain only lowercase letters.
 * 
 * 
 * 
 * canConstruct("a", "b") -> false
 * canConstruct("aa", "ab") -> false
 * canConstruct("aa", "aab") -> true
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::map<char, int> note_c_num;
        std::map<char, int> magazine_c_num;
        for(auto c : ransomNote)++note_c_num[c];
        for(auto c : magazine)++magazine_c_num[c];
        for(auto c_num : note_c_num){
            if(c_num.second > magazine_c_num[c_num.first]) return false;
        }
        return true;
    }
};
// @lc code=end

