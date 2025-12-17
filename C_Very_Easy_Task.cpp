#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
const int INF = 1e9 + 5;
const ll LINF = 1e18;

bool check(int m, int x, int y, int n){
    if((m/x)+(m/y) >= n-1){
        return true;
    }
    return false;
}

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    if(n==1) {
        cout<<min(x,y)<<endl;
        return;
    }
    // if(n==2) {
    //     cout<<2*min(x, y)<<endl;
    //     return;
    // }
    int l = 0, r = n*max(x,y);
    while (l+1<r)
    {
        int m = (l+r)/2;
        if(check(m, x, y, n)){
            r = m;
        }
        else{
            l = m;
        }
    }
    if(check(l, x, y, n)) cout<<l+min(x,y)<<endl;
    else cout<<r+min(x,y)<<endl;
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    // cin >> T;
    while (T--) solve();
    return 0;
}