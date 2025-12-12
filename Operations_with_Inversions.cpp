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
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (n == 2)
    {
        if (arr[0] > arr[1])
        {
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
        return;
    }
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                arr.erase(arr.begin() + j);
                j--;
                ans++;
            }
        }
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