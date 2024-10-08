/*
 * @lc app=leetcode id=1963 lang=cpp
 *
 * [1963] Minimum Number of Swaps to Make the String Balanced
 */

// @lc code=start
#pragma GCC optimize("O3", "unroll-loops")
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
    int minSwaps(string s) {
        string stack;
        for(char c:s){
            if(stack.length() && (c==']' && stack[stack.length()-1]=='['))stack.pop_back();
            else stack.push_back(c);
        }
        return (stack.length()%4)?(stack.length()>>2)+1:(stack.length()>>2);
    }
};
// @lc code=end

