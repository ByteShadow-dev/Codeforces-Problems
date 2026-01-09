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
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool ansExist = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (a[i] + a[j] == a[k] && k!=i && k!=j)
                {
                    ansExist = true;
                    cout << k+1 << " " << j+1 << " " << i+1 << endl;
                    return;
                }
            }
        }
    }
    cout<<-1<<endl;
    
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