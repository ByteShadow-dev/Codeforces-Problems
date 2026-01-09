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
    int n;
    cin >> n;
    vi arr(n);
    vi pref(n + 1), suff(n);

    pref[0] = 0;
    suff[n - 1] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 2)
    {
        cout << max(arr[0], -arr[1]) << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        pref[i + 1] = pref[i] + abs(arr[i]);
    }

    for (int i = n - 1; i >= 1; i--)
    {
        suff[i - 1] = suff[i] - arr[i];
    }
    int ans = suff[0];
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, pref[i] + suff[i]+arr[0]);
    }
    cout << ans << endl;
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