/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 */
// #include<iostream>
// #include <queue>
// using namespace std;
// struct TreeNode
// {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  };

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        queue<TreeNode *> que;
        que.push(root->left);
        que.push(root->right);

        while (!que.empty())
        {
            TreeNode *leftNode = que.front();
            que.pop();
            TreeNode *rightNode = que.front();
            que.pop();

            if (!leftNode && !rightNode)
            {
                continue;
            }

            if ((!leftNode || !rightNode || (leftNode->val != rightNode->val)))
            {
                return false;
            }

            que.push(leftNode->left);   // 加入左节点左孩子
            que.push(rightNode->right); // 加入右节点右孩子
            que.push(leftNode->right);  // 加入左节点右孩子
            que.push(rightNode->left);  // 加入右节点左孩子
        }
        return true;
    }
};
// @lc code=end

