#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int long long
#define vi vector<ll>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
const int INF = 1e9 + 5;
const ll LINF = 1e18;

void solve(vi &arr, int n) {
    int l = 0, h = arr.size();
    while (l+1<h)
    {
        int m = (l+h)/2;
        if(arr[m]<n){
            l = m;
        }
        else{
            h = m;
        }
    }
    if(arr[l]>=n){
        cout<<l+1<<endl;
    }
    else{
        cout<<h+1<<endl;
    }
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    int32_t k;
    cin >> T >> k;
    vi arr(T);
    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
    }
    
    while (k--) {
        int n;
        cin >> n;
        solve(arr, n);
    }
    return 0;
}