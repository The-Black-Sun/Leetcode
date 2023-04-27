/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int x = 0;//标识进位符
        if(digits[0]==0){
            digits[0] = 1;
            return digits;
        }else{
            for (int len = digits.size() - 1; len >= 0; len--)
            {
                switch (digits[len])
                {
                case 9:
                    digits[len] = 0;
                    x = 1;
                    break;
                default:
                    if (x == 1 || len == digits.size() - 1)
                    {
                        digits[len] +=1;
                        x = 0;
                        return digits;
                    }
                    break;
                }
            }
            if(x==1){
                digits.insert(digits.begin(), 1);
                return digits;
            }
            else
            {
                return digits;
            }
        }
    }
};
// @lc code=end

