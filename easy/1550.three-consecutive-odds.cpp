/*
 * @lc app=leetcode id=1550 lang=cpp
 *
 * [1550] Three Consecutive Odds
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
    bool threeConsecutiveOdds(vector<int>& arr) {
        int sum=0;
        for(int& n:arr){
            sum=sum*(n&1)+(n&1);
            if(sum==3)return true;
        }
        return false;
    }
};
// @lc code=end

