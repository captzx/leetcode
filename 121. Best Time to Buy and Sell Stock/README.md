**121. Best Time to Buy and Sell Stock**

Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.

Note that you cannot sell a stock before you buy one.
```
Example 1:
Input: [7,1,5,3,6,4]
Output: 5

Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
			 Not 7-1 = 6, as selling price needs to be larger than buying price.

Example 2:

Input: [7,6,4,3,1]
Output: 0

Explanation: In this case, no transaction is done, i.e. max profit = 0.
```

**Ideas**

* 遍历数组，每遍历一个节点，判断做两步判断: 1. 该节点对应价格是否更低，是则保留价格为买入时机，并且不做卖出考虑; 2. 若已经买入，则判断当前节点价格与买入时价格差值，保留最高利益数值  