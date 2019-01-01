#include "common.h"
#include "MyQueue.h"
/*
Implement the following operations of a queue using stacks.

push(x) -- Push element x to the back of queue.
pop() -- Removes the element from in front of queue.
peek() -- Get the front element.
empty() -- Return whether the queue is empty.

Example:
MyQueue queue = new MyQueue();
queue.push(1);
queue.push(2);
queue.peek();  // returns 1
queue.pop();   // returns 1
queue.empty(); // returns false

Notes:
You must use only standard operations of a stack -- which means only push to top, peek/pop from top, size, and is empty operations are valid.
Depending on your language, stack may not be supported natively. You may simulate a stack by using a list or deque (double-ended queue), as long as you use only standard operations of a stack.
You may assume that all operations are valid (for example, no pop or peek operations will be called on an empty queue).
*/
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
