/*
 * @lc app=leetcode id=2192 lang=cpp
 *
 * [2192] All Ancestors of a Node in a Directed Acyclic Graph
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
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<vector<int>> ancestors(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i = 0; i < n; i++) {
            // if(adj[i].size()!=0)continue;
            queue<int> q;
            vector<bool> visited(n, false);
            q.push(i);
            visited[i] = true;
            while(!q.empty()) {
                int curr = q.front();
                q.pop();
                for(int j = 0; j < adj[curr].size(); j++) {
                    int parent = adj[curr][j];
                    if(!visited[parent]) {
                        ancestors[i].push_back(parent);
                        q.push(parent);
                        visited[parent] = true;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)sort(ancestors[i].begin(),ancestors[i].end());
        return ancestors;
    }
};
// @lc code=end

