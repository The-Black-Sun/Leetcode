/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */
#include<iostream>
#include<vector>
#include <cmath>
using namespace std;

//动态规划 例题
//记录今天之前买入的最小值
//计算今天之前最小值买入，今天卖出的获利，即今天卖出的最大获利
//比较每天的最大获利，取最大值

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyMinNum=prices[0];
        int TodaySellMaxNum=0;
        if(prices.size()<=1)
            return 0;
        for (int i = 1; i < prices.size();i++)
        {
            TodaySellMaxNum = max(TodaySellMaxNum, prices[i] - buyMinNum);
            buyMinNum = min(buyMinNum, prices[i]);
        }
        return TodaySellMaxNum;
    }
};
// @lc code=end

