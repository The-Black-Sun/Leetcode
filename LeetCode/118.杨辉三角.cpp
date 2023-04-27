/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> recNum;
        vector<int> num;
        for (int i = 0; i < numRows;i++){
            for (int j = 0; j <= i;j++){
                if(j==0||j==i){
                    num.push_back(1);
                }else{
                    int addnum = recNum[i - 1][j - 1] + recNum[i - 1][j];
                    num.push_back(addnum);
                }
            }
            recNum.push_back(num);
            num.clear();
        }
        return recNum;
    }
};
// @lc code=end

