/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
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
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> freq;
        vector<int> ans;
        for(int& num:nums1){
            freq[num]=1;
        }
        for(int& num: nums2){
            if(freq[num]>0){
                ans.push_back(num);
                freq[num]=0;
            }
        }
        return ans;
    }
};
// @lc code=end

