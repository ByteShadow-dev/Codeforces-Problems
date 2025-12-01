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

int max3(int a, int b, int c){
    if(a>=b && a>=c) return a;
    if(b>=a && b>=c) return b;
    else return c;
}

int min3(int a, int b, int c){
    if(a<=b && a<=c) return a;
    if(b<=a && b<=c) return b;
    else return c;
}

int median(int a, int b, int c){
    if((b>=a && b<=c) || (b>=c && b<=a)) return b;
    if((a>=b && a<=c) || (a>=c && a<=b)) return a;
    else return c;
}

void solve() {
    // Solution
    int g, c ,l;
    cin >> g >> c >> l;
    if(max3(g, c, l)-min3(g, c, l)>=10){
        cout<<"check again"<<endl;
    }
    else{
        cout<<"final "<<median(g, c, l)<<endl;
    }


}

int main() {
    fast_io
    int T = 1;
    // cin >> T;
    while (T--) solve();
    return 0;
}