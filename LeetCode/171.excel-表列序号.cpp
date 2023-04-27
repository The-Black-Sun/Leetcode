/*
 * @lc app=leetcode.cn id=171 lang=cpp
 *
 * [171] Excel 表列序号
 */
#include<iostream>
#include<string>
using namespace std;

// @lc code=start
class Solution {
public:
    int titleToNumber(string columnTitle) {
        //A~Z 65~90
        //最后一位+前一位*26+前两位*26的指数方
        int i = columnTitle.length() - 1;
        long index = 1;
        int sum = 0;
        while (i >= 0)
        {
            int col = columnTitle[i] - 64;
            sum = col * index + sum;
            index *= 26;
            i--;
        }
        return sum;
        }
};
// @lc code=end

