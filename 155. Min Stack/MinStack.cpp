#include "common.h"
#include "MinStack.h"

/** initialize your data structure here. */
MinStack::MinStack() {
	minStack = new std::vector<int>();
	min = INT_MAX;
}

void MinStack::push(int x) {
	min = std::min(min, x);
	minStack->push_back(x);
}

void MinStack::pop() {
	if (minStack->back() == min) {
		minStack->pop_back();
		min = INT_MAX;
		for (int e : *minStack) {
			min = std::min(min, e);
		}
	}
	else minStack->pop_back();
}

int MinStack::top() {
	return *(minStack->end() - 1);
}

int MinStack::getMin() {
	return min;
}
