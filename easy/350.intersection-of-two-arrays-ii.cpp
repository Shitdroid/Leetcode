/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
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
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> freq;
        vector<int> ans;
        for(int& num:nums1){
            freq[num]++;
        }
        for(int& num: nums2){
            if(freq[num]>0){
                ans.push_back(num);
                freq[num]--;
            }
        }
        return ans;
    }
};
// @lc code=end

