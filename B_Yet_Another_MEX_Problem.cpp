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
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = min(a[i], n);
    }
    vi b(n+5);
    for (int i = 0; i < n+5; i++)
    {
        b[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        b[a[i]]++;
    }
    int mex = 0;
    while (b[mex])
    {
        mex++;
    }
    cout<<min(mex, k-1)<<endl;
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}