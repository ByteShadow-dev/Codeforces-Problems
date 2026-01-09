#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
const int INF = 1e9 + 5;
const ll LINF = 1e18;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    int a = k - 1;
    int b = n - k;
    // if(a+b+max(a,b)-1 < m){
    //     cout<<n<<endl;
    //     return;
    // }
    int i = 0, j=  0;
    while (1)
    {
        if(j<min(a, b) && i+j+1+max(i, j+1)-1<=m) ++j;
        if(i<max(a, b) && i+j+1+max(i+1, j)-1<=m) ++i;
        else break;
    }
    cout<<(i+j+1)<<endl;
    
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}