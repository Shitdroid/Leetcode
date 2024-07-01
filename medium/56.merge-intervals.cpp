/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
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
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> new_intervals;
        int intStart=intervals[0][0],intEnd=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=intEnd){
                intEnd=max(intEnd,intervals[i][1]);
            }
            else{
                new_intervals.push_back({intStart,intEnd});
                intStart=intervals[i][0];
                intEnd=intervals[i][1];
            }
        }
        new_intervals.push_back({intStart,intEnd});
        return new_intervals;
    }
};
// @lc code=end

