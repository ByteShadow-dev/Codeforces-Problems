#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
const int INF = 1e9 + 5;
const ll LINF = 1e18;

void solve() {
    // Solution
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    char x = s[n-1];
    if(n==1){
        cout<<0<<endl;
        return;
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if(s[i]!=x) ans++;
    }
    cout<<ans<<endl;
    
}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}