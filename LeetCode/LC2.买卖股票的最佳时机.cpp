//动态规划
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int total = 0;
        for (int i = 0; i < prices.size() - 1; i++)
        {
            // 原数组中如果后一个减去前一个是正数，说明是上涨的，
            // 我们就要累加，否则就不累加
            total += max(prices[i + 1] - prices[i], 0);
        }
        return total;
    }
};