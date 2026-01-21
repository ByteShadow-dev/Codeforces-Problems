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

void solve() {
    int n;
    cin >> n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    if(n==2){
        cout<<9<<endl;
        return;
    }
    int val1 = ((5*(n*n)) - 5*n - 5);
    int val2 = ((4*(n*n))-n-4);
    cout<<max(val1, val2)<<endl;
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}