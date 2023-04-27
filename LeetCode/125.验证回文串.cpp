/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
#include<iostream>
//#include<string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()){
            return true;
        }
        int len = s.length();
        char front,rear;
        int fPos=0, rPos=len-1;
        
        do
        {
            if (!isCharacter(s.at(fPos)))
            {
                fPos++;
                continue;
            }
            if (!isCharacter(s.at(rPos)))
            {
                rPos--;
                continue;
            }
            if (!isChaEqual(s.at(fPos), s.at(rPos)))
            {
                return false;
                break;
            }else{
                fPos++;
                rPos--;
            }
        } while (fPos<=rPos);

        return true;
    }

    bool isEmpty(string s){
        if(s.empty()){
            return true;
        }else
        {
            return false;
        }
    }

    bool isCharacter(char c){
        if((c>=65 && c<=90)||(c>=97 && c<=122)||(c>=48 && c<=57)){
            return true;
        }else
        {
            return false;
        }
    }

    bool isChaEqual(char fro,char rea){
        if(fro>57 && rea>57){
            if (fro == rea || fro == (rea - 32) || rea == (fro - 32))
            {
                return true;
            }
            else
            {
                return false;
            }
        }else if(fro!=rea){
            return false;
        }else{
            return true;
        }
        
    }
};
// @lc code=end

