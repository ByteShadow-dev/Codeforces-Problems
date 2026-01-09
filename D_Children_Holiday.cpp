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

int check(int mid, vi &t, vi &z, vi& y, int m){
    int T = 0;
    int total = 0;
    for (int i = 0; i < z.size(); i++)
    {
        int balloons = 0;
        int cycle_time = t[i]*z[i]+y[i];
        int full_cycles = mid/cycle_time;
        int rem = mid%cycle_time;
        int extra = min(z[i], rem/t[i]);
        balloons = (extra + (full_cycles*z[i]));
        total += balloons;
        if(total>=m)return total;
    }
    return total;
    
}

void solve() {
    int n, m;
    cin >> m >> n;
    vi t(n), z(n), y(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> z[i] >> y[i];
    }
    
    int st = 0, end = 1e18;
    while(st<end){
        int mid = (st+end)/2;
        if(check(mid, t, z, y, m)>=m){
            end = mid;
        }
        else{
            st = mid+1;
        }
    }
    cout<<st<<endl;
    vi result(n);
    int remaining = m;
    for (int i = 0; i < n; i++)
    {

        int cycle_time = t[i]*z[i]+y[i];
        int full_cycles = st/cycle_time;
        int rem = st%cycle_time;
        int extra = min(z[i], rem/t[i]);
        int balloons = (extra + (full_cycles*z[i]));
        balloons = min(balloons, remaining);
        result[i] = balloons;
        remaining-=balloons;
    }
    for(auto i:result){
        cout<<i<<" ";
    }
    cout<<endl;
}

int32_t main() {
    fast_io
    int32_t T = 1;
    // cin >> T;
    while (T--) solve();
    return 0;
}