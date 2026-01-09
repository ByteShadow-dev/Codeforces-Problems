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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += abs(arr[i] - arr[i + 1]);
    }
    int minSum = INT_MAX, curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            curr = sum - abs(arr[i] - arr[i + 1]);
            minSum = min(minSum, curr);
        }
        else if (i == n - 1)
        {
            curr = sum - abs(arr[i] - arr[i - 1]);
            minSum = min(curr, minSum);
        }
        else
        {
            curr = sum - abs(arr[i] - arr[i - 1]) - abs(arr[i] - arr[i + 1]) + abs(arr[i - 1] - arr[i + 1]);
            minSum = min(curr, minSum);
        }
    }

    cout << minSum << endl;
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