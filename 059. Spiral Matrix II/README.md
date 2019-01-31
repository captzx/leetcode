**59. Sprial Matrix II**

Given a positive integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.
```
Example:
Input: 3
Output:
[
 [ 1, 2, 3 ],
 [ 8, 9, 4 ],
 [ 7, 6, 5 ]
]
```

**Ideas**

* 类似[54. Sprial Matrix], 按++col, ++raw, --col, --raw方面生成matrix