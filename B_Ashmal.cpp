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
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string s = arr[0];
    if(n==1){
        cout<<s<<endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if(s + arr[i] > arr[i] + s){
            s = arr[i] + s;
        }
        else{
            s = s + arr[i];
        } 
    }
    cout << s << endl;
}

int32_t main()
{
    fast_io
        int32_t T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}