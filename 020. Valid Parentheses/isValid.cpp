#include "common.h"
#include "tag_vector.h"

bool isValid(std::string s) {
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