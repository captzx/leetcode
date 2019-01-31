**169. Majority Element**

Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
You may assume that the array is non-empty and the majority element always exist in the array.
```
Example 1:
Input: [3,2,3]
Output: 3

Example 2:
Input: [2,2,1,1,1,2,2]
Output: 2
```

**Ideas**

* 遍历时使用map保存，数字为键，出现次数为值  
* 利用该信息:The majority element is the element that appears more than ⌊ n/2 ⌋ times, 元素出现的次数 > floor(n/2)
   * 排序法，中间元素必然是众数  
   * 加减法，遇相同元素则+1，遇到不同元素则-1
