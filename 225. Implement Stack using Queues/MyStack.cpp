#include "common.h"
#include "MyStack.h"
/*
Implement the following operations of a stack using queues.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
empty() -- Return whether the stack is empty.

Example:
MyStack stack = new MyStack();
stack.push(1);
stack.push(2);
stack.top();   // returns 2
stack.pop();   // returns 2
stack.empty(); // returns false

Notes:
You must use only standard operations of a queue -- which means only push to back, peek/pop from front, size, and is empty operations are valid.
Depending on your language, queue may not be supported natively. You may simulate a queue by using a list or deque (double-ended queue), as long as you use only standard operations of a queue.
You may assume that all operations are valid (for example, no pop or top operations will be called on an empty stack).
*/
/** Initialize your data structure here. */
MyStack::MyStack() {
	push_queue = new std::queue<int>();
}

/** Push element x onto stack. */
void MyStack::push(int x) {
	push_queue->push(x);
}

/** Removes the element on top of the stack and returns that element. */
int MyStack::pop() {
	std::queue<int> pop_queue;
	int top;
	if (push_queue->size() == 1) {
		top = push_queue->front();
		push_queue->pop();
	}
	else {
		while (push_queue->size()!=1) {
			pop_queue.push(push_queue->front());
			push_queue->pop();
		}
		top = push_queue->front();
		push_queue->pop();
		push_queue->swap(pop_queue);
	}
	return top;
}

/** Get the top element. */
int MyStack::top() {
	// return queue->back();	Ð§ÂÊÌ«µÍ£¿
	std::queue<int> pop_queue;
	int top;
	if (push_queue->size() == 1) {
		top = push_queue->front();
	}
	else {
		while (push_queue->size() != 1) {
			pop_queue.push(push_queue->front());
			push_queue->pop();
		}
		top = push_queue->front();
		pop_queue.push(push_queue->front());
		push_queue->pop();
		push_queue->swap(pop_queue);
	}
	return top;
	
}

/** Returns whether the stack is empty. */
bool MyStack::empty() {
	return push_queue->empty();
}