/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */

// @lc code=start
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        return accumulate(nums.begin(), nums.end(), 0, bit_xor());
    }
};
// bit_xor() 用于执行bitwise_xor并在对参数执行bitwise_xor操作后返回结果
// bitwise_xor操作  按位异或
//  @lc code=end
