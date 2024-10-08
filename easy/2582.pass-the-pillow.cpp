/*
 * @lc app=leetcode id=2582 lang=cpp
 *
 * [2582] Pass the Pillow
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
    int passThePillow(int n, int time) {
        return ((time /(n-1))&1)?n-(time%(n-1)):1+(time%(n-1));
    }
};
// @lc code=end

