#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique=0;
        for(int i=0;i<nums.size();i++){
            if(i==0 || nums[i]!=nums[i-1]){
                nums[unique]=nums[i];
                if(i+1<nums.size() && nums[i]==nums[i+1]){
                    nums[unique+1]=nums[i];
                    unique++;
                    i++;
                }
                unique++;
            }
        }
        return unique;
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
    cout<<sol.removeDuplicates(nums)<<endl;
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