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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(((arr[j]%arr[i])&1) == 0){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
    
    
}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}