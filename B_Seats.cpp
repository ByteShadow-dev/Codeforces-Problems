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
    string s;
    cin >> s;
    int ans = 0;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    bool flag = true;
    int idx = 0;
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == '1')
        {
            flag = false;
            idx = i;
            break;
        }
    }
    if (flag)
    {
        s[1] = '1';
    }
    else if (flag == false && idx == 2)
    {
        s[0] = '1';
    }
    flag = true;
    idx = n-1;
    for (int i = n - 1; i >= n - 3; i--)
    {
        if (s[i] == '1')
        {
            flag = false;
            idx = i;
            break;
        }
    }
    if (flag)
    {
        s[n - 2] = '1';
    }
    else if (flag == false)
    {
        if (idx == n - 3)
        {
            s[n - 1] = '1';
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ans++;
        }
    }

    for (int i = 0; i < n; i++)
    {

        int cnt = 0;
        while (s[i] == '0' && i < n)
        {
            i++;
            cnt++;
        }
        ans += (cnt) / 3;
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