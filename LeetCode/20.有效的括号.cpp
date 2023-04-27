/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include <stack>
#include <iostream>
#include <string>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        char temp;
        for (int i = 0; i < s.length(); i++)
        {
            switch (s[i])
            {
            case '(':
                st.push(s[i]);
                break;
            case ')':
                if (!st.empty())
                {
                    temp = st.top();
                    st.pop();
                }
                else
                {
                    return false;
                }
                if (temp != '(')
                {
                    return false;
                }
                break;
            case '[':
                st.push(s[i]);
                break;
            case ']':
                if (!st.empty())
                {
                    temp = st.top();
                    st.pop();
                }
                else
                {
                    return false;
                }
                if (temp != '[')
                {
                    return false;
                }
                break;
            case '{':
                st.push(s[i]);
                break;
            case '}':
                if (!st.empty())
                {
                    temp = st.top();
                    st.pop();
                }
                else
                {
                    return false;
                }
                if (temp != '{')
                {
                    return false;
                }
                break;
            default:
                return false;
                break;
            }
        }
        if (st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// @lc code=end
