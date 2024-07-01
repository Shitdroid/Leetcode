/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
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
    bool isPalindrome(string s) {
        cout<<"Length:"<<s.length()<<endl;
        for(int i=0,j=s.length()-1;i<s.length(),j>=0;){
            while(i<s.length() && !isalnum(s[i]))i++;
            while(j>=0 && !isalnum(s[j]))j--;
            // cout<<i<<" "<<j<<endl;
            if(i<s.length() && j>=0 && tolower(s[i++])!=tolower(s[j--]))return false;
            while(i<s.length() && !isalnum(s[i]))i++;
            while(j>=0 && !isalnum(s[j]))j--;
            if((i>=s.length() && j<0)|| (i+1==s.length() && j==0) )return true;

        }
        return false;
    }
};
// @lc code=end

