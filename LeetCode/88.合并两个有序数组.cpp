/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */
#include<iostream>
#include<vector>
using namespace std;

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x=0, y=0;
        int swap = 0;
        if(n!=0){
            for (int i = 0; i < m + n;i++){
                if(nums2[y]<nums1[x]||x>=m+swap){
                    nums1.insert(nums1.begin() + i, nums2[y]);
                    nums1.pop_back();
                    x++;
                    y++;
                    swap++;
                    if(y>=n){
                        break;
                    }
                }
                else
                {
                    x++;
                }
            }
        }
    }
};
// @lc code=end

