#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
const int INF = 1e9 + 5;
#define forin(arr, n) \ 
for (int i = 0; i < n; i++) \ 
{ \ 
cin >> arr[i]; \
}
const ll LINF = 1e18;

void printArr(vector<int> arr){
for(auto i:arr){
cout<<i<<" ";\
}\
cout<<endl;\
}
void solve() {
    int n;
    cin >> n;
    vi p(n);

    forin(p, n);
    int curr = 0;
    int idx = 0;
    
    while (n-idx==p[idx] && idx<n)
    {
        idx++;
    }
    if(idx==n){
        printArr(p);
        cout<<endl;
        return;
    }
    else{
        int max_idx = max_element(p.begin()+idx, p.end()) - p.begin();
        int st = idx, end = max_idx;
        while (st<end)  
        {
            swap(p[st], p[end]);
            st++;
            end--;
        }
        printArr(p);
        cout<<endl;
    }


    
    
    
    
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}