/*
 * @lc app=leetcode id=2696 lang=cpp
 *
 * [2696] Minimum String Length After Removing Substrings
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
    int minLength(string s) {
        vector<char> stack;
        for(char c:s){
            if(stack.size() &&( (c=='B' && stack[stack.size()-1]=='A') ||(c=='D' && stack[stack.size()-1]=='C')) )stack.pop_back();
            else stack.push_back(c);
        }
        return stack.size();
    }
};
// @lc code=end

