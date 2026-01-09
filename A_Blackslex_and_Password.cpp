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
    int k ,x;
    cin >> k >> x;
    for(int i = 1; i<10000; i++){
        if(i/k == x){
            cout<<i+1<<endl;
            break;
        }
    }
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}