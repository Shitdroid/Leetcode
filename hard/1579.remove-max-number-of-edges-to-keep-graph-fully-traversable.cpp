/*
 * @lc app=leetcode id=1579 lang=cpp
 *
 * [1579] Remove Max Number of Edges to Keep Graph Fully Traversable
 */

// @lc code=start


class DisJoint_Set{
    vector<int> parent;
    vector<int> rank;
    int n,numSets;
public:
    DisJoint_Set(int n){
        this->n=n;
        parent.resize(n);
        rank.resize(n);
        this->numSets=n;
        for(int i=0;i<n;i++){
            parent[i]=i;
            rank[i]=0;
        }
    }
    int find(int x){
        if(parent[x]!=x){
            parent[x]=find(parent[x]);
        }
        return parent[x];
    }
    void Union(int x,int y){
        int xroot=find(x);
        int yroot=find(y);
        if(xroot==yroot)return;
        if(rank[xroot]<rank[yroot]){
            parent[xroot]=yroot;
        }else if(rank[xroot]>rank[yroot]){
            parent[yroot]=xroot;
        }else{
            parent[yroot]=xroot;
            rank[xroot]++;
        }
        numSets--;
    }
    bool sameSet(int x,int y){
        return find(x)==find(y);
    }
    int operator[](int x){
        return parent[x];
    }
    int getNumSets(){
        return numSets;
    }
};

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        ios_base::sync_with_stdio(false);
        int sum=0;
        DisJoint_Set forAlice(n+1),forBob(n+1);
        for(auto &edge:edges){
            if(edge[0]==3){
                if(forAlice.sameSet(edge[1],edge[2])){
                    sum++;
                }else{
                    forAlice.Union(edge[1],edge[2]);
                    forBob.Union(edge[1],edge[2]);
                }
            }
        }
        for(auto &edge:edges){
            if(edge[0]==1){
                if(forAlice.sameSet(edge[1],edge[2])){
                    sum++;
                }else{
                    forAlice.Union(edge[1],edge[2]);
                }
            }else if(edge[0]==2){
                if(forBob.sameSet(edge[1],edge[2])){
                    sum++;
                }else{
                    forBob.Union(edge[1],edge[2]);
                }
            }
        }
        if(forAlice.getNumSets()!=2 || forBob.getNumSets()!=2)return -1;
        return sum;
    }
};
// @lc code=end

