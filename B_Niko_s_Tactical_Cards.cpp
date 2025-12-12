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
    ll a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll minN[n], maxN[n];
    minN[0] = min(-a[0], b[0]), maxN[0] = max(-a[0], b[0]);
    for (int i = 1; i < n; i++)
    {
        maxN[i] = max(maxN[i - 1] - a[i], b[i] - minN[i - 1]);
        minN[i] = min(minN[i - 1] - a[i], b[i] - maxN[i - 1]);
        
    }
    cout<<maxN[n-1]<<endl;
}

int main()
{
    fast_io int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}