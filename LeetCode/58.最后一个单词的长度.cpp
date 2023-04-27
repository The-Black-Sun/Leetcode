/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */
#include<iostream>
#include<string>
using namespace std;

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length() - 1;
        int len_word = 0;
        bool sign = false;
        for (int i = len; i >= 0; i--)
        {
            if (s[i] == ' ' && sign == true)
            {
                return len_word;
            }
            else
            {
                if (s[i] != ' ')
                {
                    len_word++;
                    sign = true;
                }
            }
        }
        return len_word;
    }
};
// @lc code=end

