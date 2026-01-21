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
    vector<long double> s(4);
    cin >> s[0] >> s[1] >> s[2] >> s[3];
    long double t;
    sort(s.begin(), s.end());
    cin >> t;;
    if (t >= (s[1]+s[2]+s[3])/3.0)
    {
        cout << "infinite" << endl;
    }
    else if((s[0]+s[1]+s[2])/3.0 > t){
        cout<< "impossible"<<endl;
    }
    else
    {
        long double ans = (3.0 * t) - (s[1]+s[2]);
        cout<<fixed<<setprecision(2)<<ans<<endl;
    }
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