#include "common.h"
#include "calPoints.h"

int calPoints(std::vector<std::string>& ops) {
	std::stack<std::string> ops_stack;
	std::vector<int> round_score;
	int sum_result = 0;
	for (size_t i = 0; i < ops.size(); ++i) {
		int ri = ops.size() - i - 1;
		ops_stack.push(ops[ri]);
	}
	while (!ops_stack.empty()) {
		std::string str = ops_stack.top();
		ops_stack.pop();
		char c = str[0]; 
		switch (c) {
		case 'C':
			sum_result -= round_score[round_score.size() - 1];
			round_score.pop_back();
			break;
		case 'D':
			round_score.push_back(round_score[round_score.size() - 1]*2);
			sum_result += round_score[round_score.size() - 1];
			break;
		case '+':
			{
				int last = round_score.size() - 1;
				round_score.push_back(round_score[last] + round_score[last - 1]);
				sum_result += round_score[round_score.size() - 1];
				break;
			}
		default:
			{	
				int score= std::atoi(str.c_str());
				round_score.push_back(score);
				sum_result += score; 
			}
		}
	}
	return sum_result;
}