/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
// using namespace std;

class Solution {
public:
    int minDepth(TreeNode* root) {
        int Llevel=0,Rlevel = 0;
        if(root==NULL){
            return 0;
        }
        else if(root->left==NULL && root->right==NULL){
            return 1;
        }else{
            Rlevel = minDepth(root->right);
            Llevel = minDepth(root->left);
            if(Llevel!=0 && Rlevel!=0){
                if (Rlevel > Llevel)
                {
                    return ++Llevel;
                }
                else
                {
                    return ++Rlevel;
                }
            }else{
                if(Llevel==0){
                    return ++Rlevel;
                }else{
                    return ++Llevel;
                }
            }
        }
    }
};
// @lc code=end

