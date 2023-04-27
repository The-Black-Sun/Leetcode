/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] 比特位计数
 */

#include<iostream>
#include<vector>
using namespace std;

// @lc code=start
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> num(n + 1);
        num[0] = 0;
        for (int i = 0; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                num[i] = num[i / 2];
            }
            else
            {
                num[i] = num[i - 1] + 1;
            }
        }
        return num;
    }
};
// @lc code=end

