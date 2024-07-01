/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        int length=1;
        if(head==nullptr || head->next==nullptr)return head;
        while(temp->next!=nullptr){
            temp=temp->next;
            length++;
        }
        // cout<<length<<endl;
        k%=length;
        temp->next=head;
        for(int i=0;i<length-k;i++){
            temp=head;
            head=head->next;
        }
        temp->next=nullptr;
        return head;
    }
};
// @lc code=end

