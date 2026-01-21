#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define int long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
const int INF = 1e9 + 5;
const ll LINF = 1e18;

void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    int l = n, r = n;
    int count = 0;
    while (r != 1)
    {
        if (l <= k && k <= r)
            break;
        l /= 2;
        r = r / 2 + r % 2;
        count++;
    }
    if (l <= k && k <= r)
    {
        cout << count << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int32_t main()
{
    fast_io
        int32_t T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}