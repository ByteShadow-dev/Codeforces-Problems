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
    string s;
    cin >> s;
    string ans;
    if (n == k)
    {
        for (int i = 0; i < n; i++)
        {
            ans += '-';
        }
        cout << ans << endl;
        return;
    }
    // string length is k
    for (int i = 0; i < n; i++)
    {
        ans += '+';
    }
    int st = 0, end = n - 1, count = 0;
    for (auto j : s)
    {
        if (j == '0')
        {
            ans[st] = '-';
            st++;
        }
        else if (j == '1')
        {
            ans[end] = '-';
            end--;
        }
        else if (j == '2')
        {
            count++;
        }
        k--;
    }
    while (count)
    {
        ans[st] = '?';
        ans[end] = '?';
        st++;
        end--;
        count--;
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