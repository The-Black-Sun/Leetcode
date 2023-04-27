/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
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
//  };
// #include<iostream>
// #include<vector>
// using namespace std;

class Solution
{
public:
    TreeNode *dfs(vector<int> &nums, int left, int right)
    {
        if (left >= right)
            return NULL;
        int mid = (right + left) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        root->left = dfs(nums, left, mid);
        root->right = dfs(nums, mid + 1, right);
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        int len = nums.size();
        return dfs(nums, 0, len);
    }
};
// @lc code=end

