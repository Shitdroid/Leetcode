/*
 * @lc app=leetcode id=2058 lang=cpp
 *
 * [2058] Find the Minimum and Maximum Number of Nodes Between Critical Points
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int first=-1,last=-1,cnt=0,mini=INT_MAX;
        while(1){
            if(head->next==NULL || head->next->next==NULL)break;
            if((head->next->val>head->val && head->next->next->val<head->next->val) || (head->next->val<head->val && head->next->next->val>head->next->val)){
                if(first==-1)first=cnt;
                if(last!=-1)mini=min(mini,cnt-last);
                last=cnt;
            }
            cnt++;
            head=head->next;
        }
        if(first==-1 || first==last)return {-1,-1};
        return {mini,last-first};
    }
};
// @lc code=end

