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
    int n, k;
    cin >> n >> k;
    long double arr[n];
    long double st = 0, end = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        end = max(arr[i], end);
    }   
    
    for (int i = 0; i < 110; i++)   
    {
        int pieces = 0;
        long double mid = (st + end)/2;
        for(auto i:arr){
            pieces += (int)((i)/mid);
        }
        if(pieces >= k){
            st = mid;
        }
        else{
            end = mid;
        }
    }
    cout<<fixed<<setprecision(6)<<st<<endl;
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    // cin >> T;
    while (T--) solve();
    return 0;
}