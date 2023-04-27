/*
 * @lc app=leetcode.cn id=145 lang=cpp
 *
 * [145] 二叉树的后序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> frost;
        vector<int> lFrost;
        vector<int> rFrost;
        if (root != nullptr)
        {
            if (root->left != nullptr)
            {
                lFrost = postorderTraversal(root->left);
                frost.insert(frost.end(), lFrost.begin(), lFrost.end());
            }
            if (root->right != nullptr)
            {
                rFrost = postorderTraversal(root->right);
                frost.insert(frost.end(), rFrost.begin(), rFrost.end());
            }
            frost.push_back(root->val);
            return frost;
        }
        else
        {
            return frost;
        }
    }
};
// @lc code=end

