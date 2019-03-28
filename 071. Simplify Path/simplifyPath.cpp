#include "common.h"
#include "tag_vector.h"

std::string simplifyPath(std::string path) {
	std::string res;
	std::stack<char> sc;
	for (auto c : path) {
		if (sc.empty() || std::isalpha(c)) sc.push(c);
		else {
			auto tc = sc.top();
			if (tc == '/' && c == '/') continue;
			else if (tc == '/' && c == '.') {
				sc.push(c);
			}
			else if (tc == '.' && c == '.') {
				while (!sc.empty() && sc.top() != '/') sc.pop(); sc.pop();
			}
		}
	}
	res.resize(sc.size());
	while (!sc.empty()) {
	}
	return res;
}