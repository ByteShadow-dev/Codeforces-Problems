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
    // Solution
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int z = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0) z++;
        else o++;
        if (b[i]==0) z++;
        else o++;
        
    }
    if(z%2==0 && o%2==0){
        cout<<"Tie"<<endl;
    }
    else{
        for (int i = n - 1; i >= 0; i--)
        {
            if(a[i]!=b[i]){
                if(i%2==0) cout<<"Ajisai"<<endl;
                else cout<<"Mai"<<endl;
                break;
            }
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