#include "common.h"
#include "tag_vector.h"

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