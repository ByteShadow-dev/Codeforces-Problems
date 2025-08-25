#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
const int INF = 1e9 + 5;
const ll LINF = 1e18;

void solve()
{
    // Solution
    int n;
    cin >> n;
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    for (int j = 0; j < n-1; j++)
    {
        if (arr[j]==arr[j+1])
        {
            cout<<"YES"<<endl;
            return;
        }
        
    }
    cout<<"NO"<<endl;
    
}

int main()
{
    fast_io int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}