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
#define forin(arr, n)           \
    for (int i = 0; i < n; i++) \
    {                           \
        cin >> arr[i];          \
    }
const ll LINF = 1e18;

void printArr(vector<int> arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
}
void solve()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    forin(a, n);
    b = a;
    int max_k = INT_MAX;
    sort(b.begin(), b.end());
    if (b == a)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            max_k = min(max(a[i] - b[0], b[n - 1] - a[i]), max_k);
        }
    }
    cout << max_k << endl;
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