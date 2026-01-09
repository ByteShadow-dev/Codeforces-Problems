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
    int n, m;
    cin >> n >> m;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unordered_map<int, int> map1; // ai -> i
    if (2*m > n)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        map1[a[i]] = i + 1;
    }
    sort(a.begin(), a.end());
    if (m == 0)
    {
        int sum = 0;
        int idx = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            sum += a[i];
            if (sum >= a[n - 1])
            {
                idx = i;
                break;
            }
        }
        if (idx == -1)
        {
            cout << idx << endl;
            return;
        }
        cout << n - 1 << endl;
        for (int i = 0; i < idx; i++)
        {
            cout << map1[a[i]] << " " << map1[a[i + 1]] << endl;
        }
        for (int i = idx; i < n - 1; i++)
        {
            cout << map1[a[i]] << " " << map1[a[n - 1]] << endl;
        }
    }
    else
    {
        cout << (n - m) << endl;
        for (int i = 0; i < n - 2 * m; i++)
        {
            cout << map1[a[i]] << " " << map1[a[i + 1]] << endl;
        }
        for (int i = n - 1; i >= n - m; i--)
        {
            cout << map1[a[i]] << " " << map1[a[i - m]] << endl;
        }
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