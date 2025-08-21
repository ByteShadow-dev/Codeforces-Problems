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
    // Solution
    ll int n;
    cin >> n;

    ll int i = 0;
    ll int ans = 0;
    while (n != 0)
    {
        ll power = 1;
        int count = 0;
        while (power * 3 <= n)
        {
            power *= 3;
            count++;
        }
        n-=(power);
        ans += (power)*3 + ((power)/3)*count;
    }

    cout << ans << endl;
}

int main()
{
    fast_io int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}