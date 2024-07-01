/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
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
    bool isValid(string s) {
        stack<char> chars;
        for(auto& c:s){
            if(c==')'){
                if(!chars.empty() && chars.top()=='(')chars.pop();
                else return false;
            }
            else if(c=='}'){
                if(!chars.empty() && chars.top()=='{')chars.pop();
                else return false;
            }
            else if(c==']'){
                if(!chars.empty() && chars.top()=='[')chars.pop();
                else return false;
            }
            else chars.push(c);
        }
        return chars.empty();
    }
};
// @lc code=end

