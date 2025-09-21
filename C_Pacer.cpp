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
    int n, m;
    cin >> n >> m;
    vi a(n+1), b(n+1);
    a[0] = 0, b[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i]>>b[i];
    }
    bool flag = true;
    int ans = 0;
    for(int j = 1; j<=n; j++){
        if(flag == true && ((a[j]%2==0 && b[j]==0) || (a[j]%2==1 && b[j]==1)) ){
            ans+=a[j]-a[j-1];
            flag = true;  
            // cout<<"a"<<endl;
        }
        else if(flag == false && ((a[j]%2==0 && b[j]==0) || (a[j]%2==1 && b[j]==1))){
            ans+=a[j]-a[j-1]-1;
            flag = true;
            // cout<<"b"<<endl;
        }
        else if(flag == true && !((a[j]%2==0 && b[j]==0) && (a[j]%2==1 && b[j]==1))){
            ans+=a[j]-a[j-1]-1;
            flag = false;
            // cout<<"c"<<endl;
        }
        else{
            ans+=a[j]-a[j-1];
            flag = false;
            // cout<<"d"<<endl;
        }
        
        
    }
    if(flag = true){
        ans+=m-a[n];
    }
    else{
        ans+=m-a[n]-1;
    }
    cout<<ans<<endl;
    

    
}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}