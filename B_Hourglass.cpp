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
    int s, k, m;
    cin >> s >> k >> m;
    if(k>=s){

        if((s-(m%k)) >=0){
            cout<<s-(m%k)<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        int n = m/k;
        if(n%2==0){
            cout<<(s - (m%k))<<endl;
        }
        else{
            cout<<(k-(m%k))<<endl;
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