/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
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
    bool isHappy(int n) {
        unordered_set<int> m;
        while(n!=1){
            if(m.find(n)!=m.end())return false;
            m.emplace(n);
            int sum=0;
            while(n){
                int a=n%10;
                sum+=(a)*(a);
                n/=10;
            }
            n=sum;
        }
        return true;        
    }
};
// @lc code=end

