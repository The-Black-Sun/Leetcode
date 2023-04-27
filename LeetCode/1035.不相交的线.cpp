/*
 * @lc app=leetcode.cn id=1035 lang=cpp
 *
 * [1035] 不相交的线
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        //设置限制长度
        int x = 0, y = 0;
        int length = 0;
        vector<vector<int>> dp(nums1.size()+1, vector<int>(nums2.size() + 1, 0));
        for (int i = 1; i <= nums1.size(); i++)
        {
            for (int j = 1; j <= nums2.size(); j++)
            {
                if (nums1[i-1]==nums2[j-1])
                {
                    length++;
                    x = i - 1;
                    y = j - 1;
                    break;
                }
                
            }
            
        }
        
    }
};
// @lc code=end

