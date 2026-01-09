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
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '4')
        {
            a++;
        }
        else
        {
            b++;
        }
    }

    if (!x && !y)
    {
        cout << "YES" << endl;
        return;
    }
    x = abs(x);
    y = abs(y);
    if (a + 2 * b < x + y)
        cout << "NO" << endl;
    else if (a + b < max(x, y))
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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