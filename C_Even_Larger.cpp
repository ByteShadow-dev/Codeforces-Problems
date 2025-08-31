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
    vi arr(n+1);
    for (int i = 1; i < n+1; i++)
    {
        cin>>arr[i];
    }
    // even index sum >= odd index sum for every subarray
    // can decrease any element by 1 in one operation
    // find the minimum number of operations

    if (n<=2)
    {
        /* code */
    }
    
    
    
    
    
    
}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}