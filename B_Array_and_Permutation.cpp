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
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    vi p(n);
    forin(p, n);
    vi a(n);
    forin(a, n);
    vi unique_elements;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            unique_elements.push_back(a[i]);
        }
    }
    // printArr(unique_elements);
    int st = 0;
    for (int i = 0; i < n; i++)
    {
        if (st < unique_elements.size() && unique_elements[st] == p[i])
        {
            st++;
        }
    }
    if (st == unique_elements.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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