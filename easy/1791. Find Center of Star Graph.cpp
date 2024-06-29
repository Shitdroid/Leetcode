#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if(edges[1][0]==edges[0][0] || edges[1][0]==edges[0][1])return edges[1][0];
        else return edges[1][1];
    }
};

int init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
