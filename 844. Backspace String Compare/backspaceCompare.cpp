#include "common.h"
#include "tag_vector.h"

bool backspaceCompare(std::string S, std::string T) {
	return getRealStr(S) == getRealStr(T);
}

std::string getRealStr(std::string T) {
	std::stack<int> stack;
	std::string RT;
	for (auto it = T.rbegin(); it != T.rend(); ++it) {
		stack.push(*it);
	}
	while (!stack.empty()) {
		auto ele = stack.top();
		stack.pop();
		if (ele == '#') {
			if (!RT.empty())
			{
				RT.pop_back();
				continue;
			}
		}
		else RT.push_back(ele);
	}
	return RT;
}