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
    int n, k;
    cin >> n >> k;
    if (k > n)
    {
        cout << 0;
        return;
    }
    vi days(n);
    for (int i = 0; i < n; i++)
    {
        cin >> days[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        while (days[i] != 1 && i<n)
        {
            count++;
            if (count == k)
            {
                ans++;
                i++;
                break;
            }
            i++;
            
        }
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
