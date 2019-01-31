#include "common.h"
#include "maxProfit2.h"

int maxProfit2(std::vector<int>& prices) {
	int buy = INT_MAX, buyflag = false;
	int profit = 0, onceProfit = 0;
	// 最低谷买进，最高峰卖出
	for (size_t i = 0; i < prices.size(); ++i) {
		if (!buyflag && prices[i] < buy) {
			buy = prices[i]; 
			buyflag = true;
			continue;
		}
		if (buyflag && prices[i] - buy >= onceProfit){
			onceProfit = prices[i] - buy;
			continue;
		}
		profit += onceProfit;
		buy = prices[i];
		onceProfit = 0;
	}
	if (onceProfit != 0)profit += onceProfit;
	return profit;
}

int maxProfit2s(std::vector<int>& prices) {
	int profit = 0, result = 0;
	for (size_t i = 1; i < prices.size(); ++i) {
		profit = prices[i] - prices[i - 1];
		if (profit > 0)
			result += profit;
	}
	return result;
}