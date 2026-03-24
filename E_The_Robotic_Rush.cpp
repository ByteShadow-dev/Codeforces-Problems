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

void printArr(vi arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n), b(m); // n robots and m spikes
    forin(a, n);
    forin(b, m);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<bool> dead(n);
    map<int, vi> death_locations;
    int ans = n;
    string s;
    cin >> s; // length k

    for (int i = 0; i < n; i++)
    {
        if (b[0] < a[i])
        {
            int left_dist = a[i] - *((lower_bound(b.begin(), b.end(), a[i]) - 1));
            death_locations[-left_dist].push_back(i);
        }
        if (b[m - 1] > a[i])
        {
            int right_dist = *lower_bound(b.begin(), b.end(), a[i]) - a[i];
            death_locations[right_dist].push_back(i);
        }
    }

    int maxL = 0, maxR = 0;
    int factor = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'L')
        {
            factor--;
        }
        else
        {
            factor++;
        }
        for (auto i : death_locations[factor])
        {
            if (dead[i])
                continue;
            dead[i] = true;
            ans--;
        }
        death_locations[factor].clear();
        cout << ans << " ";
    }
    cout << endl;
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