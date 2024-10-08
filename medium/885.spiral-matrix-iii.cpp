/*
 * @lc app=leetcode id=885 lang=cpp
 *
 * [885] Spiral Matrix III
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
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> visited;
        visited.push_back({rStart, cStart});
        for(int r = rStart, c = cStart, i=1;visited.size()<rows*cols;i++){
            for(int j=0;j<i;j++){
                if(r>=rows || r<0 ) {
                    c+=i;
                    break;
                }
                c++;
                if(r>=0&&r<rows&&c>=0&&c<cols)visited.push_back({r,c});
            }
            for(int j=0;j<i;j++){
                if(c>=cols || c<0 ) {
                    r+=i;
                    break;
                }
                r++;
                if(r>=0&&r<rows&&c>=0&&c<cols)visited.push_back({r,c});

            }
            i++;
            for(int j=0;j<i;j++){
                if(r>=rows || r<0 ) {
                    c-=i;
                    break;
                }
                c--;
                if(r>=0&&r<rows&&c>=0&&c<cols)visited.push_back({r,c});
            }
            for(int j=0;j<i;j++){
                if(c>=cols || c<0 ) {
                    r-=i;
                    break;
                }
                r--;
                if(r>=0&&r<rows&&c>=0&&c<cols)visited.push_back({r,c});
            }
        }
        return visited;
    }
};
// @lc code=end

