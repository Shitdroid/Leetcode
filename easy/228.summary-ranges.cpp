/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
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
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ranges;
        for(int i=0;i<nums.size();i++){
            for(int j=1;i+j<nums.size();j++){
                if((long long)j!=(long long)nums[i+j]-(long long)nums[i]){
                    if(j==1)ranges.push_back(to_string(nums[i]));
                    else ranges.push_back(to_string(nums[i])+"->"+to_string(nums[i+j-1]));
                    i+=j-1;
                    break;
                }
                else if(i+j==nums.size()-1){
                    ranges.push_back(to_string(nums[i])+"->"+to_string(nums[i+j]));
                    i+=j+1;
                    break;
                }
            }
            if(i==nums.size()-1)ranges.push_back(to_string(nums[i]));
        }
        return ranges;
    }
};
// @lc code=end

