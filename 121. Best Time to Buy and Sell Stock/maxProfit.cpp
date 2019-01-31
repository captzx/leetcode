#include "common.h"
#include "maxProfit.h"

int maxProfit(std::vector<int>& prices) {
	int buy = INT_MAX;
	int profit = 0;
	for (size_t i = 0; i < prices.size(); ++i) {
		if (prices[i] < buy) {
			buy = prices[i]; continue;
		}
		if (buy<INT_MAX && prices[i] - buy > profit)
			profit = prices[i] - buy;
	}
	return profit;
}