#include "common.h"
#include "tag_queue.h"

MyQueue::MyQueue(){
	push_stack = new std::stack<int>();
}
/** Push element x to the back of queue. */
void MyQueue::push(int x) {
	push_stack->push(x);
}
/** Removes the element from in front of queue and returns that element. */
int MyQueue::pop() {
	std::stack<int> pop_stack;
	int front;
	if (push_stack->size() == 1) {
		front = push_stack->top();
		push_stack->pop();
	}
	else {
		while (push_stack->size()!=1) {
			pop_stack.push(push_stack->top());
			push_stack->pop();
		}
		front = push_stack->top();
		push_stack->pop();
		while (!pop_stack.empty()) {
			push_stack->push(pop_stack.top());
			pop_stack.pop();
		}
	}
	return front;
}
/** Get the front element. */
int MyQueue::peek() {
	std::stack<int> pop_stack;
	int front;
	if (push_stack->size() == 1) front = push_stack->top();
	else {
		while (!push_stack->empty()) {
			if (push_stack->size() == 1) front = push_stack->top();
			pop_stack.push(push_stack->top());
			push_stack->pop();
		}
		while (!pop_stack.empty()) {
			push_stack->push(pop_stack.top());
			pop_stack.pop();
		}
	}
	return front;
}
/** Returns whether the queue is empty. */
bool MyQueue::empty() {
	return push_stack->empty();
}
