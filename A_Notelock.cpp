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

bool check(string s, int pos, int k){
    for (int i = pos - 1; i >= pos-k+1; i--)
    {
        if(s[i]=='1'){
            return false;
        }
    }
    return true;
    
    
}

void solve() {
    // Solution
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s; // Binary string of 0 and 1
    // n is the length of s
    int ans = 0;
    if(s[0]=='1') ans++;
    // int idx = 2;
    for(int i = 1; i<n; i++){
        if(s[i]=='1'){
            if(check(s, i, k)){
                ans++;
            }
        }
    }
    cout<<ans<<endl;


}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}