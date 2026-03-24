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
cout<<endl;
}
void solve() {
    int n;
    cin >> n;
    vi a(n);
    forin(a, n); 
    int ans = 0;
    sort(a.begin(), a.end(), greater<int>());
    int idx = 0;
    bool on = false;
    int noOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==1){
            ans+=a[i];
            on = true;
            idx = i;
            break;
        }
    }
    if(on == false){
        cout<<0<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0){
            ans+=a[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==1 && idx != i){
            noOdd++;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(cnt==noOdd/2){
            break;
        }
        if(a[i]%2==1 && idx!=i){
            ans+=a[i];
            cnt++;
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