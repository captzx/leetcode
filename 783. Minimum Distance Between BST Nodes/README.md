**783. Minimum Distance Between BST Nodes**

Given a Binary Search Tree (BST) with the root node root, return the minimum difference between the values of any two different nodes in the tree.
```
Example :

Input: root = [4,2,6,1,3,null,null]
Output: 1
Explanation:
Note that root is a TreeNode object, not an array.
```
The given tree [4,2,6,1,3,null,null] is represented by the following diagram:
```
		4
	   / \
	  2   6
	 / \
    1   3
```
while the minimum difference in this tree is 1, it occurs between node 1 and node 2, also between node 3 and node 2.

**Ideas**

* 若是一个列表，将其排序后遍历列表，前后做差，每次比较保留最小值即为最终结果; 巧的是BST本身中根遍历即是一个有序列表，每遍历一个点后保存该点的值与下一个节点做差，每次比较保留最小值即为最终结果 