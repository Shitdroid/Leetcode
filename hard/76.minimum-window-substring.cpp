#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> t_count(128,0);
        int unique_chars=0;
        for(auto c:t) {
            if(t_count[c]==0)
                unique_chars++;
            t_count[c]++;
        }
        int completed_chars=0;
        int start=0, end=0, min_len=INT_MAX, min_start=0, min_end=0;
        vector<int> s_count(128,0);
        for(int start=0,end=0;end<s.length();){
            while(completed_chars<unique_chars && end<s.length()){
                if(t_count[s[end]]!=0){
                    s_count[s[end]]++;
                    if(s_count[s[end]]==t_count[s[end]])
                        completed_chars++;
                }
                end++;
            }
            if(end==s.length() && completed_chars<unique_chars)
                break;
            while(completed_chars==unique_chars && start<end){
                if(t_count[s[start]]!=0){
                    s_count[s[start]]--;
                    if(s_count[s[start]]<t_count[s[start]])
                        completed_chars--;
                }
                start++;
            }
            if(end-start+1<min_len){
                min_len=end-start+1;
                min_start=start-1;
                min_end=end;
            }
        }
        return min_len<INT_MAX?s.substr(min_start,min_end-min_start):"";
    }

};

int main(){
    Solution sol;
    string s,t;
    ifstream fin("input.txt");
    fin>>s>>t;
    cout<<sol.minWindow(s,t)<<endl;
    return 0;

}

int init = [] {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 99;
}();