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

void query(vi &arr, int l, int r)
{
    int count = 0;
    int n = arr.size();
    int left = lower_bound(arr.begin(), arr.end(), l) - arr.begin();
    int right = upper_bound(arr.begin(), arr.end(), r) - arr.begin();
    
    cout<<right-left<<" ";
}

void solve()
{
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int k;
    cin >> k;
    while (k--)
    {
        int l, r;
        cin >> l >> r;
        query(arr, l, r);
    }
}

int32_t main()
{
    fast_io
        int32_t T = 1;
    // cin >> T;
    while (T--)
        solve();
    return 0;
}