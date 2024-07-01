/*
 * @lc app=leetcode id=135 lang=cpp
 *
 * [135] Candy
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
    int candy(vector<int>& ratings) {
        int ranges=0;
        int sum=0;
        int i=0;
        
        while(i+1<ratings.size()){
            int inc=0,dec=0;
            while(i+1<ratings.size() && ratings[i]<ratings[i+1]){inc++;i++;}
            while(i+1<ratings.size() && ratings[i]>ratings[i+1]){dec++;i++;}
            while(i+1<ratings.size() && ratings[i]==ratings[i+1]){i++;sum++;}
            sum+=(inc+1)*(inc)/2+dec*(dec+1)/2;
            sum+=max(inc,dec)+1;
            ranges++;
        }
        return sum-ranges+1;
    }
};
// @lc code=end

