/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
    // void rotate(vector<int>& nums, int k) {
    //     int n = nums.size();
    //     k = k%n;
    //     if(k==0)
    //         return;
    //     vector<int> temp(n);
    //     for(int i=0;i<n;i++)
    //         temp[(i+k)%n] = nums[i];
    //     nums = temp;
    // }

    //we have 3 steps here
    //1. reverse the whole array : now the last k elements are in the first k positions. But they are reversed
    //2. reverse the first k elements : Now the last k elements are in correct position
    //3. reverse the remaining elements : All elements are now in correct positions
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        if(k==0)
            return;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};
// @lc code=end

