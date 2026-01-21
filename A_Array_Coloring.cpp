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
    vi a(n);
    unordered_map<int, int> m; // -1 - red and 1 blue
    int curr = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]] = curr;
        curr = -curr;
    }
    if(n==2){
        cout<<"YES"<<endl;
        return;
    }
    sort(a.begin(), a.end());
    int color = m[a[0]];
    for (int i = 1; i < n; i++)
    {
        if(color == m[a[i]]){
            cout<<"NO"<<endl;
            return;
        }
        else{
            color=m[a[i]];
        }
    }
    cout<<"YES"<<endl;
    
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
} 