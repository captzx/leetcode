#include "common.h"
#include "isIsomorphic.h"
/*
Given two strings s and t, determine if they are isomorphic.
Two strings are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.

Example 1:
Input: s = "egg", t = "add"
Output: true

Example 2:
Input: s = "foo", t = "bar"
Output: false

Example 3:
Input: s = "paper", t = "title"
Output: true

Note:
You may assume both s and t have the same length.
*/
bool isIsomorphic(std::string s, std::string t) {
	if (s.size() != t.size())return false;
	std::map<char, char> charMap;
	for (size_t i = 0; i < s.size();++i) {
		if (charMap.find(s[i]) == charMap.end()) {
			for (auto c : charMap) {
				if (c.second == t[i])return false;	// No two characters may map to the same character
			}
			charMap[s[i]] = t[i];
		}
		else {
			if (charMap[s[i]] != t[i])return false;
		}
	}
	return true;
}