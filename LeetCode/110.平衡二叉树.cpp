/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 */
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

// #include<vector>
// #include<iostream>
// using namespace std;

class Solution {
public:
    int height(TreeNode *root)
    {
        if (root== NULL)
            return 0;
        int lh = height(root->left), rh = height(root->right);
        if (lh >= 0 && rh >= 0 && abs(lh - rh) <= 1)
        {
            return max(lh, rh) + 1;
        }
        else
        {
            return -1;
        }
    }

    bool isBalanced(TreeNode* root) {
        return height(root) >= 0;
    }
};
// @lc code=end

