**60. Permutation Sequence**

The set [1,2,3,...,n] contains a total of n! unique permutations.

```
By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

"123"  
"132"  
"213"  
"231"  
"312"  
"321"  

Given n and k, return the kth permutation sequence.

Note:

Given n will be between 1 and 9 inclusive.  
Given k will be between 1 and n! inclusive.  

```
Example 1:

Input: n = 3, k = 3
Output: "213"

Example 2:

Input: n = 4, k = 9
Output: "2314"
```

**Ideas**

* [trick]按梯度取值, 从n=3, k=3的示例中, 共产生6个结果, k为3为第二梯队率先取值2, 随后在[1,3]中斟酌, 在以2为头的结果中, k=3则取其中第一个值, 得"213"
