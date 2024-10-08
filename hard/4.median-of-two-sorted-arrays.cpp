/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        bool odd=(nums1.size()+nums2.size())&1;
        int median1,median2;
        for(int i=0,j=0;;){
            if( i == nums1.size() || (j<nums2.size() && nums1[i]>nums2[j])){
                if(i+j==(nums1.size()+nums2.size())/2-1)median1=nums2[j];
                else if(i+j==(nums1.size()+nums2.size())/2){
                    median2=nums2[j];
                    break;
                }
                j++;
            }
            else{
                if(i+j==(nums1.size()+nums2.size())/2-1)median1=nums1[i];
                else if(i+j==(nums1.size()+nums2.size())/2){
                    median2=nums1[i];
                    break;
                }
                i++;
            }
        }
        if(odd)return median2;
        return (median1*1.0+median2)/2;
    }
};
// @lc code=end

