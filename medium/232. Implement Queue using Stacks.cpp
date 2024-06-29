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
class MyQueue {
public:
    MyQueue() {
        size=0;
    }
    
    stack<int> s;
    int size;
    
    void push(int x) {
        stack<int> temp;
        for(int i=0;i<size;i++){
            temp.push(s.top());
            s.pop();
        }
        s.push(x);
        for(int i=0;i<size;i++){
            s.push(temp.top());
            temp.pop();
        }
        size++;
    }
    
    int pop() {
        int temp=s.top();
        s.pop();
        size--;
        return temp;
    }
    
    int peek() {
        return s.top();        
    }
    
    bool empty() {
        return size==0;
    }
};

//this answer does everything in O(1) time
class MyQueue2 {
public:
    MyQueue2() {
        size=0;
    }
    
    stack<int> s_stack;
    stack<int> s_queue;
    int size;
    
    void push(int x) {
        s_stack.push(x);
        size++;
    }
    
    int pop() {
        if(s_queue.empty()){
            while(!s_stack.empty()){
                s_queue.push(s_stack.top());
                s_stack.pop();
            }
        }
        int temp=s_queue.top();
        s_queue.pop();
        size--;
        return temp;
    }
    
    int peek() {
        if(s_queue.empty()){
            while(!s_stack.empty()){
                s_queue.push(s_stack.top());
                s_stack.pop();
            }
        }
        return s_queue.top();        
    }
    
    bool empty() {
        return size==0;
    }
};

int main(){
    FASTIO;
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    int tc;
    cin >> tc;
    for (int tt = 1; tt <= tc; tt++){
        solve(tt);
    }
    return 0;
}