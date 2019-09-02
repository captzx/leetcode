/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 *
 * https://leetcode.com/problems/min-stack/description/
 *
 * algorithms
 * Easy (36.49%)
 * Likes:    1667
 * Dislikes: 176
 * Total Accepted:    288.5K
 * Total Submissions: 790.2K
 * Testcase Example:  '["MinStack","push","push","push","getMin","pop","top","getMin"]\n[[],[-2],[0],[-3],[],[],[],[]]'
 *
 * 
 * Design a stack that supports push, pop, top, and retrieving the minimum
 * element in constant time.
 * 
 * 
 * push(x) -- Push element x onto stack.
 * 
 * 
 * pop() -- Removes the element on top of the stack.
 * 
 * 
 * top() -- Get the top element.
 * 
 * 
 * getMin() -- Retrieve the minimum element in the stack.
 * 
 * 
 * 
 * 
 * Example:
 * 
 * MinStack minStack = new MinStack();
 * minStack.push(-2);
 * minStack.push(0);
 * minStack.push(-3);
 * minStack.getMin();   --> Returns -3.
 * minStack.pop();
 * minStack.top();      --> Returns 0.
 * minStack.getMin();   --> Returns -2.
 * 
 * 
 */
class MinStack {
private:
    std::vector<std::pair<int,int>> _nums;
	int _iMin;
public:
    /** initialize your data structure here. */
    MinStack():_iMin(INT_MAX) {

    }
    
    void push(int x) {
		if(x < _iMin) _iMin = x;
        _nums.push_back({x,_iMin});
    }
    
    void pop() {
        _nums.pop_back();
        if(!_nums.empty())_iMin = getMin();
        else _iMin = INT_MAX;
    }
    
    int top() {
        return _nums.back().first;
    }
    
    int getMin() {
        return _nums.back().second;
    }
    // √ Accepted
    // √ 18/18 cases passed (24 ms)
    // √ Your runtime beats 97.97 % of cpp submissions
    // √ Your memory usage beats 76.36 % of cpp submissions (16.9 MB)
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

