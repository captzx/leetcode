#include "common.h"
#include "MinStack.h"

/*
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.
Example:
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   --> Returns -3.
minStack.pop();
minStack.top();      --> Returns 0.
minStack.getMin();   --> Returns -2.
*/

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
