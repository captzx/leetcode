**21. Merge Two Sorted Lists**

Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
```
Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
```

**Ideas**

* 正常遍历, 比较, 斩断, 再连接
* 使用递归