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

bool isAns(int m, int n, int w, int h){
    if((m/w)*(m/h) >= n){
        return true;
    }
    return false;
}


void solve() {
    int n, w, h;
    cin >> w >> h >> n;
    int st = 0, end = 1;
    while (!isAns(end, n, w, h))
    {
        end <<= 1;
    }
    
    while (st+1<end)
    {
        int mid = st + (end - st)/2;
        if(isAns(mid, n, w, h))end = mid;
        else st = mid;
    }
    if(isAns(st, n, w, h)){
        cout<<st<<endl;
    }
    else{
        cout<<end<<endl;
    }
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    // cin >> T;
    while (T--) solve();
    return 0;
}