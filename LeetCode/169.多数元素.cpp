/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */
#include<iostream>
#include<vector>
using namespace std;

//摩尔投票法——对拼消耗
//由于多数元素的数量大于1/2，所以当每两个不同数字相互抵消，到最后只会剩下多数元素。

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int maj = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (maj == nums[i])
                count++;
            else
            {
                count--;
                if (count == 0)
                {
                    maj = nums[i + 1];
                }
            }
        }
        return maj;
    }
};
// @lc code=end

