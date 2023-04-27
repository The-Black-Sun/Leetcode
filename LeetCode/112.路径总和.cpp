/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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



class Solution
{
public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        int sum = 0;
        if (root == nullptr)
        {
                return false;
        }
        else
        {
            if (FindTar(sum, root, targetSum))
            {
                return true;
            }
            else
                return false;
        }
    }

    bool FindTar(int sum, TreeNode *root, int targetSun)
    {
        sum += root->val;
        if (root->left == nullptr && root->right == nullptr)
        {
            if (sum == targetSun)
                return true;
        }
        else if (root->left != nullptr && root->right == nullptr)
        {
            if (FindTar(sum, root->left, targetSun))
                return true;
        }
        else if (root->right != nullptr && root->left == nullptr)
        {
            if (FindTar(sum, root->right, targetSun))
                return true;
        }
        else
        {
            if (FindTar(sum, root->left, targetSun))
                return true;
            if (FindTar(sum, root->right, targetSun))
                return true;
        }
        return false;
    }
};
// @lc code=end
