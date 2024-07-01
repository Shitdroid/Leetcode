/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(int n) {
        if(n==0 || n==1) return n;
        // cout<<n<<" "<<(n&1)<<" "<<(n>>1)<<endl;
        return (n&1)+hammingWeight(n>>1);
    }
};
// @lc code=end

