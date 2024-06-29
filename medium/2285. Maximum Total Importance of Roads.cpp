#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> count(n,0);
        long long price=0;
        for(auto road:roads){
            count[road[0]]++;
            count[road[1]]++;
        }
        sort(count.begin(),count.end(),greater<int>());
        for(int i=n;i>0;i--){
            price+=count[n-i]*i;
        }
        return price;
    }
};

int init = [] {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 99;
}();