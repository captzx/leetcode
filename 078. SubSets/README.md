**78. Subsets**

Given a set of distinct integers, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.
```
Example:

Input: nums = [1,2,3]
Output:
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]

**Ideas**

* 利用[77. Subsets]的组合结果, 略微修改
* 对于数组中的每个数都有取或者不取两种情况