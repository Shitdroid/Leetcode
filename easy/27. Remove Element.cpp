#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        for(int i=0;i+count<nums.size();i++){
            if(nums[i]==val){
                count++;
                swap(nums[i],nums[nums.size()-count]);
                i--;
            }
        }
        return nums.size()-count;
    }
};

int main(){
    Solution sol;
    vector<int> nums;
    int val;
    ifstream fin("input.txt");
    int n;
    fin>>n;
    nums.resize(n);
    for(int i=0;i<n;i++)
        fin>>nums[i];
    fin>>val;
    cout<<sol.removeElement(nums,val)<<endl;
    for(int i=0;i<nums.size();i++)
        cout<<nums[i]<<" ";
    return 0;
}



int init = [] {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 99;
}();