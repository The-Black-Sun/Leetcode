/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 */
// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> num1, num2, num3;
        if (root != NULL)
        {
            num1 = inorderTraversal(root->left);
            num1.insert(num1.end(), root->val);
            num2 = inorderTraversal(root->right);
            num3.insert(num3.end(), num1.begin(), num1.end());
            num3.insert(num3.end(), num2.begin(), num2.end());
            return num3;
        }
        else
        {
            return num3;
        }
    }
};
// @lc code=end
