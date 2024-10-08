/*
 * @lc app=leetcode id=840 lang=cpp
 *
 * [840] Magic Squares In Grid
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
    bool check_magic(vector<vector<int>>& grid, int row, int col){
        vector<bool> exists(9,false);
        int sums[3]={0,0,0};
        for(int i=0;i<3;i++){
            int sum=0;
            for(int j=0;j<3;j++){
                sum+=grid[row+i][col+j];
                sums[j]+=grid[row+i][col+j];
                if(grid[row+i][col+j]<1 || grid[row+i][col+j]>9 || exists[grid[row+i][col+j]-1])return false;
                exists[grid[row+i][col+j]-1]=true;
            }
            if(sum!=15)return false;
        }
        if(sums[0]!=15 || sums[1]!=15 || sums[2]!=15)return false;
        if(grid[row][col]+grid[row+1][col+1]+grid[row+2][col+2]!=15)return false;
        if(grid[row][col+2]+grid[row+1][col+1]+grid[row+2][col]!=15)return false;
        return true;
    }
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n-2;i++){
            for(int j=0;j<m-2;j++){
                count+=check_magic(grid,i,j);
            }
        }
        return count;
    }
};
// @lc code=end

