/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        int i;
        float j;
        if(x==0){
            return 0;
        }
        for (i = 1;;){
            j = x / i;
            if (j == i)
            {
                return i;
            }
            else if (j < i)
            {
                return --i;
            }
            else
            {
                i++;
            }
        }
        
    }
};
// @lc code=end

