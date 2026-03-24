#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define int long long
#define vi vector<long long>
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
    cout << endl;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vi a(q);
    forin(a, q);

    bool hasB = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            hasB = true;
            break;
        }
    }
    vector<pair<char, int>> process;
    int i = 0;
    while (i < n)
    {
        int cnt = 0;
        if (s[i] == 'A')
        {
            while (i < n && s[i] == 'A')
            {
                cnt++;
                i++;
            }
            process.push_back({'A', cnt});
        }
        if (i < n && s[i] == 'B')
        {
            process.push_back({'B', 1});
            i++;
        }
    }
    if (hasB ==false)
    {
        for (int i = 0; i < q; i++)
        {
            cout << a[i] << endl;
        }
        return;
    }
    for (int i = 0; i < q; i++)
    {
        int ans = 0;
        while (a[i])
        {
            for (int j = 0; j < process.size(); j++)
            {
                if (process[j].first == 'A')
                {
                    if (process[j].second >= a[i])
                    {
                        ans += a[i];
                        a[i] = 0;
                    }
                    else
                    {
                        ans += process[j].second;
                        a[i] -= process[j].second;
                    }
                }
                else
                {
                    a[i] /= 2;
                    ans++;
                }
                if (a[i] == 0)
                {
                    break;
                }
            }
        }
        cout << ans << endl;
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