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
    // it contains 2026
    // it does not contain 2025
    // 0 2 5 6
    int st = 0, end = 4;
    bool newYearStr = true;
    if(n<4){
        cout<<0<<endl;
        return;
    }
    if((s.find("2025") != std::string::npos) && s.find("2026") != string::npos){
        cout<<0<<endl;
    }
    else if((s.find("2025") != std::string::npos)){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
        return;
    }
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}