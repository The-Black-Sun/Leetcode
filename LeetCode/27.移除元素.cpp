/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */
#include <iostream>
#include <vector>
using namespace std;

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        if(nums.size()==0){
            return 0;
        }
        int j = 0;
        for (int i = 0; i < nums.size();i++){
            if(nums[i]!=val){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};
// @lc code=end
