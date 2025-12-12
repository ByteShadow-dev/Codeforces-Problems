#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
const int INF = 1e9 + 5;
const ll LINF = 1e18;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    vi pf(n+1);
    pf[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pf[i+1] = a[i] + pf[i];
    }
    int m;
    cin >> m;
    vi q(m);
    for (int i = 0; i < m; i++)
    {
        cin >> q[i];
    }

    int st = 0, end = n - 1;
    for (int i = 0; i < m; i++)
    {
        auto ans = lower_bound(pf.begin(), pf.end(), q[i]);
        cout << (ans - pf.begin()) << endl;
    }
}

int main()
{
    fast_io int T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}