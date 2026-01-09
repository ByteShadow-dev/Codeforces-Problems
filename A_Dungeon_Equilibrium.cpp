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
    vi freq(101, 0); // 0 to 100
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        freq[a]++;
    }
    int ans = 0;
    for (int i = 0; i < 101; i++)
    {
        if(freq[i]==0){
            continue;
        }
        else if(freq[i]<i){
            ans+=freq[i];
        }
        else if(freq[i]>i){
            ans+=(freq[i]-i);
        }
    }
    cout<<ans<<endl;
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}