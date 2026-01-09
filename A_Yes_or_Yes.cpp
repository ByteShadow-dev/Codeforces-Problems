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
    string s;
    cin >> s;
    int y = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='Y') y++;
        if(y>=2){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}