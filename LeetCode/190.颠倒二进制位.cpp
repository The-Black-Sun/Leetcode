/*
 * @lc app=leetcode.cn id=190 lang=cpp
 *
 * [190] 颠倒二进制位
 */
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// @lc code=start
class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t ans = 0;
        int i = 32;
        while (i--)
        {
            //ans <<= 1;
            ans += n & 1;
            n >>= 1;
        }
        return ans;
    }
};
// @lc code=end
