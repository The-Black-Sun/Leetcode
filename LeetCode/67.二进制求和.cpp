/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        string str;
        int cur = 0, i = a.size() - 1, j = b.size() - 1;
        int maxLength = i > j ? i : j;
        while (maxLength >= 0 || cur != 0)
        {
            if (i >= 0)
                cur += a[i--] - '0';
            if (j >= 0)
                cur += b[j--] - '0';
            str += to_string(cur % 2);
            cur /= 2;
            maxLength--;
        }
        reverse(str.begin(), str.end());
        return str;
    }
};
// @lc code=end

