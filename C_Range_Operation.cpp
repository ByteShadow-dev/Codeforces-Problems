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
    vector<ll> arr(n+1);
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    // array elements are from 1 
    
    ll curr = 0, term2 = 0, ans = 0, p = 0; // term2 is the one with the left pointer
    for (int i = 1; i <= n; i++)
    {
        term2 = max(term2, -(ll)i*i+i+p);
        p+=arr[i];
        ans = max(ans, (ll)i*i + i - p + term2);
    }
    cout<<p + ans<<endl;
    
    

}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}