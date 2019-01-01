#pragma once

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
class MinStack {
private:
	std::vector<int> *minStack;
	int min;
public:
	MinStack();
	void push(int x);
	void pop();
	int top();
	int getMin();
};