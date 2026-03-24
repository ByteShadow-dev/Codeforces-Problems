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
#define forin(arr, n) \ 
for (int i = 0; i < n; i++) \ 
{ \ 
cin >> arr[i]; \ 
}
const ll LINF = 1e18;

void check(int x){

}

void solve() {
    long double c;
    cin >> c;
    long double st = 0, end = sqrt(c); // start from 0 and not 1
    // cout<<end;
    long double mid; 
    for (int i = 0; i < 100; i++)
    {
        mid = st + (end - st)/2.0;
        if(mid*mid + sqrt(mid) > c){
            end = mid;
        }
        else{
            st= mid;
        }
    }
    cout<<fixed<<setprecision(15)<<mid<<endl;
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    // cin >> T;
    while (T--) solve();
    return 0;
}