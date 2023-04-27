/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> frost;
        vector<int> lFrost;
        vector<int> rFrost;
        if(root!=nullptr){
            frost.push_back(root->val);
        }else
        {
            return frost;
        }
        if(root->left!=nullptr){
            lFrost=preorderTraversal(root->left);
            frost.insert(frost.end(),lFrost.begin(),lFrost.end());
        }
        if (root->right != nullptr)
        {
            rFrost = preorderTraversal(root->right);
            frost.insert(frost.end(), rFrost.begin(), rFrost.end());
        }
        return frost;
    }
};
// @lc code=end

