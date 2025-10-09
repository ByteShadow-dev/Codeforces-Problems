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
    int l = 0, w = n;
    int ans = 0;
    while(l!=1 || w!=1){
        if(w%2==1){
            ans+=w/2;
            l+=w/2;
            w=(w- w/2);
        }
        else{
            ans+=w/2;
            l+=w/2;
            w=w/2;
        }
        if(l!=0 && l!=1){
            ans+=l/2;
            l-=l/2;
            
        }
    }
    cout<<ans+1<<endl;
}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}