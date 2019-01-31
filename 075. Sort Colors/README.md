**75. Sort Colors**

Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note: You are not suppose to use the library's sort function for this problem.  
```
Example:

Input: [2,0,2,1,1,1]
Output: [0,0,1,1,2,2]
```
Follow up:

A rather straight forward solution is a two-pass algorithm using counting sort.

First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, then 1's and followed by 2's.

Could you come up with a one-pass algorithm using only constant space?

**Ideas**

* 设置前后索引, 类似快排, 将所有0放置前半段, 将所有2放置后半段, 随后mid = first = last, 以mid为last交换0,1, 以mid为first交换1,2
* 设置前索引指向第一个不为0位置, 设置后索引指向第一个不为2位置, 若前索引为2则与后索引交换, 若后索引为0则和前索引交换, 交换后需要**将前索引-1**, 方能正常迭代