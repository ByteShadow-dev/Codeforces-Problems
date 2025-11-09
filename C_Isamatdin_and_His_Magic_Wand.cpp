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

void printArr(vi arr){
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

void solve() {
    // Solution
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = false;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]%2 != arr[i+1]%2){
            flag = true;
            break;
        }
    }
    if(flag==false){
        printArr(arr);
        return;
    }
    else{
        sort(arr.begin(), arr.end());
        printArr(arr);
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