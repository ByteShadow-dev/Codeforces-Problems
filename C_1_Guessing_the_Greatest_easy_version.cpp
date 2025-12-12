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

int query(int l, int r){
    if(l==r){
        return l;
    }
    cout<<"? "<<l<<" "<<r<<endl;
    int t;
    cin >> t;
    return t;
}

void solve() {
    int n;
    cin >> n;
    int r = n, l = 1;
    while (l+1<r)
    {
        int m = (l + r)/2;
        int x = query(l , r);
        if(x<m){
            if(query(l, m)==x){
                r= m;
            }
            else{
                l = m;
            }
        }
        else{
            if(query(m, r)==x){
                l = m;
            }
            else{
                r = m;
            }
        }
    }

    if(query(l, r)==l){
        cout<<"! "<<r<<endl;
    }
    else{
        cout<<"! "<<l<<endl;
    }
    
    
}



int main() {
    fast_io
    int T = 1;
    // cin >> T;
    while (T--) solve();
    return 0;
}