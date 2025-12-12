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
    int n;
    cin >> n;
    vi arr(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    int a = s.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=a){
            cout<<arr[i]<<endl;
            return;
            break;
        }
    }
    
    
    
}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}