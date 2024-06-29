#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a,pair<int,int> b){
    
    if(a.first==b.first){
        return a.second<b.second;
    }
    return a.first>b.first;
}

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int> > pairs; 
        for(int i=0;i<difficulty.size();i++){
            pairs.push_back({profit[i],difficulty[i]});
        }
        sort(pairs.begin(),pairs.end(),compare);
        long long int sum=0;
        for(int i=0;i<worker.size();i++){
            for(int i=0;i<pairs.size();i++){
                if(worker[i]>=pairs[i].second){
                    sum+= pairs[i].first;
                }
            }
        }
        return sum;
    }
};

int main(){
    vector<pair<int,int> > pairs;
    pairs.push_back({10,20});
    pairs.push_back(make_pair(30,200));
    pairs.push_back(make_pair(4,50));
    pairs.push_back(make_pair(60,150));
    pairs.push_back(make_pair(10,200));
    sort(pairs.begin(),pairs.end(),compare);
    for(auto x:pairs){
        cout<<x.first<<" "<<x.second<<endl;
    }
}