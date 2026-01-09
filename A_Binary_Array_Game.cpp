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
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int st = 0, end = n - 1;
    bool isAllOne = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            isAllOne = false;
            break;
        }
    }
    if (isAllOne)
    {
        cout << "Alice" << endl;
        return;
    }
    while (st < n && a[st] != 0)
    {
        st++;
    }
    while (end >= 0 && a[end] != 0)
    {
        end--;
    }
    if (st == 0 && end == n - 1)
    {
        cout << "Bob" << endl;
        return;
    }
    else
    {
        cout << "Alice" << endl;
        return;
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