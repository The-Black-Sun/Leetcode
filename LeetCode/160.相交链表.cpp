/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<iostream>
using namespace std;

// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL){}
// };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *P1, *P2;
        P1 = headA;
        P2 = headB;
        while (P1!=P2)
        {
            P1 = P1 == nullptr ? headB : P1->next;
            P2 = P2 == nullptr ? headA : P2->next;
        }
        return P1;
    }
};
// @lc code=end

