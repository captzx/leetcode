#include "common.h"
#include "MyStack.h"

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