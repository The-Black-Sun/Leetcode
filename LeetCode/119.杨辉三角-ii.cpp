/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> recNum;
        vector<int> num;
        for (int i = 0; i < rowIndex + 1; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                {
                    num.push_back(1);
                }
                else
                {
                    int addnum = recNum[i - 1][j - 1] + recNum[i - 1][j];
                    num.push_back(addnum);
                }
            }
            if (i != rowIndex)
            {
                recNum.push_back(num);
                num.clear();
            }
        }
        return num;
    }
};
// @lc code=end

