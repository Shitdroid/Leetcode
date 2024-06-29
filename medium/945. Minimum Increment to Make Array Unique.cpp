#include <bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
    map<int,int> mp;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();){
        int cnt=1,num=arr[i];
        while(i+cnt<arr.size() && arr[i]==arr[i+cnt])cnt++;
        cout<<num<<" "<<cnt<<" "<<i<<endl;
        if(mp.find(cnt)!=mp.end())return false;
        else mp.insert(make_pair(cnt,1));
        i+=cnt;
    }
    return true;
}

int main(){
    vector<int> arr={1,2,2,1,1,3};
    cout<<uniqueOccurrences(arr)<<endl;
}