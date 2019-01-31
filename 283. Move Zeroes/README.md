**283. Move Zeroes**

Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
```
Example:
Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
```
Note:

You must do this in-place without making a copy of the array.

Minimize the total number of operations.

**Ideas**

* 先找到第一次出现0的位置索引，此后开始，若遇到非零数，则与当前0所在的位置交换数值; 之后0的索引向后移一步(仍是当前数组中第一次出现零的索引)