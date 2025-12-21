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
    int l,a,b;
    cin >> l >> a >> b;
    if(a==l-1){
        cout<<l-1<<endl;
        return;
    }
    int curr = a, ans = a;
    for (int i = 1; i <= l+1; i++)
    {   
        curr = (a+(i*b))%l;
        ans = max(curr, ans);
        if(curr == l-1){
            cout<<l-1<<endl;
            return;
        }
    }
    cout<<ans<<endl;
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}