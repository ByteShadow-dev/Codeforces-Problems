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
    int n, m, h;
    cin >> n >> m >> h;

    vi a(n + 1);
    vi a_alt(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    a_alt = a;
    vi b(m + 1), c(m + 1);
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i] >> c[i];
    }
    int target = 0;
    for (int i = m; i >= 1; i--)
    {
        if (a[b[i]] + c[i] > h)
        {
            target = i;
            break;
        }
    }
    vector<int> changed_idx;
    for (int i = target + 1; i <= m; i++)
    {
        if(a[b[i]] + c[i] > h){
            for (int j = 0; j < changed_idx.size(); j++)
            {
                a[changed_idx[j]] = a_alt[changed_idx[j]]; 
            }
            changed_idx.clear();
        }
        
        else{
            changed_idx.push_back(b[i]);
            a[b[i]] += c[i];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
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