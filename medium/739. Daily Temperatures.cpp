#include <bits/stdc++.h>
using namespace std;

#define FASTIO ios::sync_with_stdio(0);cin.tie(0)
#define PB push_back
#define MOD (ll)(1e9+7)
#define SZ 100005
#define deb(n) cout<<n<<endl
#define INF INT_MAX

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vp;
typedef vector<pll> vpll;
typedef vector<bool> vb;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> tops;
        vector<int> ans(temperatures.size(),0);
        for(int i=temperatures.size()-1;i>=0;i--){
            while(!tops.empty() && temperatures[i]>=temperatures[tops.top()]){
                tops.pop();
            }
            if(!tops.empty()){
                ans[i]=tops.top()-i;
            }
            tops.push(i);
        }
        return ans;
    }
};