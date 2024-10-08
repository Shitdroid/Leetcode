/*
 * @lc app=leetcode id=1518 lang=cpp
 *
 * [1518] Water Bottles
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
    int numWaterBottles(int numBottles, int numExchange) {
        return numBottles+(numBottles)/(numExchange-1)-(numBottles%(numExchange-1)==0?1:0);
    }
};
// @lc code=end

