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
    int n, m;
    cin >> n >> m;
    vi a(m);
    bool isIncreasing = true;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        if(i!=0 && a[i]<=a[i-1]){
            isIncreasing = false;
        }
    }
    if(isIncreasing){
        cout<<(n-a[m-1]+1)<<endl;
    }
    else{
        cout<<1<<endl;
    }

    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}