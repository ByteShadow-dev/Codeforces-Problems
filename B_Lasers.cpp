#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
const int INF = 1e9 + 5;
const ll LINF = 1e18;

void solve() {
    // Solution
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vi arr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    vi arr2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cout<<n+m<<endl;
    
}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}