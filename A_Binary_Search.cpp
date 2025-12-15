#include <bits/stdc++.h>
using namespace std;
 
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define int long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
const int INF = 1e9 + 5;
const ll LINF = 1e18;
 
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while(k--){
        int x;
        cin >> x;
        int st = 0, end = arr.size()-1;
        int mid;
        while(st<=end){
            mid = st + (end - st)/2;
            if(arr[mid]==x){
                cout<<"YES"<<endl;
                break;
            }
            else if(arr[mid]<x){
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        if(arr[mid]!=x){
            cout<<"NO"<<endl;
        }
        
    }
    
}
 
int32_t main()
{
    fast_io
    int T = 1;
    while (T--)
        solve();
    return 0;
}
