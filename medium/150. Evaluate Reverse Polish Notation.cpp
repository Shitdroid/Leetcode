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
int evalRPN(vector<string>& tokens) {
    stack<int> s;
    for(int i=0;i<tokens.size();i++){
        if(tokens[i]=="+"){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            s.push(a+b);
        }
        else if(tokens[i]=="-"){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            s.push(b-a);
        }
        else if(tokens[i]=="*"){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            s.push(a*b);
        }
        else if(tokens[i]=="/"){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            s.push(b/a);
        }
        else{
            s.push(stoi(tokens[i]));
        }
    }
}