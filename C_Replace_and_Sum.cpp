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
cout<<i<<" ";
}\
cout<<endl;\
}
void solve() {
    int n, q;
    cin >> n >> q;
    vi a(n), b(n);
    forin(a, n);
    forin(b, n);
    vi prefixArr(n+1);
    prefixArr[0] = 0;
    for(int i = n-1; i>=0; i--){
        if(i==n-1){
            a[i] = max(a[i], b[i]);
        }
        else{
            a[i] = max({a[i], b[i], a[i+1]});
        }
    }
    for (int i = 0; i < n; i++)
    {
        prefixArr[i+1] = a[i] + prefixArr[i];
    }
    // printArr(a)
    
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout<<prefixArr[r]-prefixArr[l-1]<<" ";
    }
    cout<<endl;
    

    
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}