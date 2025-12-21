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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int len = 0;
    vi ans;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='1'){
            len++;
            ans.pb(1+i);
        }
    }
    cout<<len<<endl;
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}