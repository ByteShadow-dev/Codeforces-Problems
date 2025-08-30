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
    ll n;
    cin >> n;
    ll powerOfTens = 10;
    vector<ll> ans;
    while (n/(powerOfTens+1) > 0)
    {
        if(n%(powerOfTens+1)==0){
            ans.push_back(n/(powerOfTens+1));
        }
        powerOfTens*=10;
    }
    cout<<ans.size()<<endl;
    if(ans.size()==0){
        return;
    }
    sort(ans.begin(), ans.end());
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    
    

}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}