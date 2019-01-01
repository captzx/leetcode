#include "common.h"
#include "isValid.h"

/*
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example:
Input: "()"		Output: true	
Input: "()[]{}"	Output: true
Input: "(]"		Output: false
Input: "([)]"	Output: false
Input: "{[]}"	Output: true
*/

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