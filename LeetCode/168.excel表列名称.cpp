/*
 * @lc app=leetcode.cn id=168 lang=cpp
 *
 * [168] Excel表列名称
 */

// @lc code=start
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        while (columnNumber>0)
        {
            int curr = (columnNumber - 1) % 26;
            columnNumber = (columnNumber - 1) / 26;
            char character;
            character = 'A' + curr;
            result = character + result;
        }

        return result;
    }
};
// @lc code=end

