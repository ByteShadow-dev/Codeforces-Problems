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
    int n, a, b;
    cin >> n >> a >> b; // 1<=a, b<=n
    if(a>b){
        if(n%2 == a%2 && n%2 == b%2){
            cout<<"yes"<<endl;
            return;
        }
    }
    else if(b>=a){
        if(n%2 == b%2){
            cout<<"yes"<<endl;
            return;
        }
    }
    cout<<"no"<<endl;

}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}