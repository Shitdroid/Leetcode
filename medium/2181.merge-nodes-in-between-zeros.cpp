/*
 * @lc app=leetcode id=2181 lang=cpp
 *
 * [2181] Merge Nodes in Between Zeros
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <bits/stdc++.h>
using namespace std;

int init = [] {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 99;
}();
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head;
        ListNode* last=head;
        int sum=0;
        while(temp->next!=NULL){
            temp=temp->next;
            if(temp->val==0){
                last->val=sum;
                last->next=temp;
                if(temp->next!=NULL)last=temp;
                sum=0;
            }
            sum+=temp->val;
        }
        last->next=NULL;
        return head;
    }
};
// @lc code=end

