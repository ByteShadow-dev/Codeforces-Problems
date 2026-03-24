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

void printArr(vector<int> arr){
for(auto i:arr){
cout<<i<<" ";}
}

bool check(int m, string s, string p, vi& a){
    for (int i = 0; i < m; i++)
    {
        s[a[i]-1] = '0';
    }
    int idx = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(idx < p.size() && s[i]==p[idx]) idx++;
    }
    if(idx == p.size()){
        return true;
    }
    return false;
    
}

void solve() {
    string t, p;
    cin >> t;
    cin >> p;
    vi a(t.size());
    forin(a, t.size());
    int st = 0, end = a.size();
    int mid = 0;
    int ans = 0;
    while(st <= end){
        mid = st + (end - st)/2;
        if(check(mid, t, p, a)){
            st = mid+1;
            ans = max(ans, mid);
        }
        else{
            end = mid-1;
        }
    }
    cout<<ans<<endl;
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    // cin >> T;
    while (T--) solve();
    return 0;
}