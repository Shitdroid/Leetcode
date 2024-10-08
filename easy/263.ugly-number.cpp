/*
 * @lc app=leetcode id=263 lang=cpp
 *
 * [263] Ugly Number
 */

// @lc code=start
class Solution {
public:
    bool isUgly(int n) {
        if(n==0)return false;
        if(n==1)return true;
        int ara[]={30,27,25,20,16,15,12,10,8,6,5,3,2};
        for(int i=0;i<13;i++){
            while(n%ara[i]==0){
                n/=ara[i];
                if(n==1)return true;
            }
        }
        return n==1;
    }
};
// @lc code=end

