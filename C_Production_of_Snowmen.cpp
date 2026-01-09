#include <bits/stdc++.h>
#include <algorithm>
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

bool good(vi x, vi y, int n, int k){
    for (int i = 0; i < n; i++)
    {
        if(x[i] <= y[(i+k)%n]){
            return false;
        }
    }
    return true;
    
}

void solve()
{
    int n;
    cin >> n;
    // a-> head
    // b->torso
    // c-> leg
    // a<b<c
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vi b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vi c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int k1 = 0, k2 = 0;
    for (int i = 0; i < n; i++)
    {
        if(good(b, a, n, i)){
            k1++;
        }   
        if(good(c, b, n, i)){
            k2++;
        }
    }
    cout<<(k1*k2*n)<<endl;
    
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