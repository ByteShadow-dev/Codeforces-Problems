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
    int n, l, r;
    cin >> n >> l >> r;
    vi b(n+1);
    for (int i = 1; i <= n; i++)
    {
        if(i==r){
            b[i] = l-1;
            continue;
        }
        b[i] = i;
    }
    vi arr(n+1);
    arr[1] = b[1];
    for(int i = 2; i<=n; i++){
        arr[i] = (b[i] ^ b[i-1]);
    }

    for(int i = 1; i<=n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    
    return 0;
}