/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 */
//  struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}     
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };
// #include<iostream>
// #include<aclapi.h>
// using namespace std;

class Solution {
public:
    int maxDepth(TreeNode* root) {
        int x, y;
        if(root!=NULL){
            x = maxDepth(root->left);
            y = maxDepth(root->right);
            if (x >= y)
            {
                return x + 1;
            }
            else
            {
                return y + 1;
            }
        }else{
            return 0;
        }
    }
};
// @lc code=end

