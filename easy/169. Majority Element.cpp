#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    //we get the majority element as only with the real majority element can we get a positive count in the end
    int majorityElement(vector<int>& nums) {
        int major=nums[0],count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==major)
                count++;
            else
                count--;
            if(count==0){
                major=nums[i];
                count=1;
            }
        }
        return major;
    }
};

int init = [] {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 99;
}();