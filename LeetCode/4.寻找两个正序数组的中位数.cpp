/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int L1 = nums1.size();
        int L2 = nums2.size();
        int Length = (L1 + L2) / 2;
        int LengthYu = (L1 + L2) % 2;
        double MidNum;
        int x = 0, y = 0;
       
        return MidNum;
    }

    vector<int> Test(vector<int> nums1,vector<int> nums2){
        vector<int> nums;
        int x = 0, y = 0;
        int L = nums1.size()+nums2.size();
        for (int i = 0; i < L; i++)
        {
            if(nums1[x]==NULL && nums2[y]==NULL){
                if (nums1[x]>nums2[y])
                {
                    nums.push_back(nums2[y]);
                    y++;
                }else
                {
                    nums.push_back(nums1[x]);
                    x++;
                }
                
            }
        }
        
    }
};
// @lc code=end

