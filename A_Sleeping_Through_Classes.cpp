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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    // important classes are 1
    // if you listen to an important class i then you cannot sleep till i+k classes
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            for (int j = 1; j <= k; j++)
            {
                if (i + j < n && s[i + j] == '1')
                {
                    i = i + j;
                    j = 0;
                }
                else if (i + j >= n)
                {
                    i = i + j;
                    break;
                }
            }
            i += k;

            continue;
        }
        ans++;
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