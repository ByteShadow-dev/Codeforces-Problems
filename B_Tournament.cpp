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
    int n, j ,k;
    cin >> n >> j >> k;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    auto maxIterator = std::max_element(arr.begin(), arr.end());
    int maxVal = *maxIterator;
    if(k>1){
        cout<<"yes"<<endl;
        return;
    }
    else if(arr[j-1]==maxVal){
        cout<<"yes"<<endl;
        return;
    }
    else{
        cout<<"no"<<endl;
        return;
    }
    
}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}