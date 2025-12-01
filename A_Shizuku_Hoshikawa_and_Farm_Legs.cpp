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
    if(n%2) {cout<<0<<endl; return;}
    else if(n%4==0){
        cout<<(n/4)+1<<endl;
    }
    else{
        cout<<((n/2)+1)/2<<endl;
    }
}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}