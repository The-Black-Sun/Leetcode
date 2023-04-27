/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */
#include<iostream>
#include<vector>
using namespace std;

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()<2)
        {
            return nums.size();
        }
        int Len = 0;
        for (int i = 1; i < nums.size();i++)
        {
            if(nums[Len]!=nums[i]){
                nums[++Len] = nums[i];
            }
        }
        return ++Len;
    }
};
// @lc code=end

