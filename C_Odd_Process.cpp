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
const ll LINF = 1e18;

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    vi even, odd;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]%2==1){
            odd.push_back(arr[i]);
        }
        else{
            even.push_back(arr[i]);
        }
    }
    sort(odd.begin(), odd.end(), greater<int>());
    sort(even.begin(), even.end(), greater<int>());
    
    if(even.size()==0){
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0){
                cout<<odd[0]<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
        return;
        
    }
    if(odd.size()==0){
        for (int i = 0; i < n; i++)
        {
            cout<<0<<" ";
        }
        cout<<endl;
        return;
    }
    if(odd.size()==1){
        int sum = odd[0];
        cout<<sum<<" ";
        for (int i = 0; i < even.size(); i++)
        {
            sum += even[i];
            cout<<sum<<" ";
        }
        cout<<endl;
        return;
        
    }
    int m = even.size();
    // k=1 to k = m+1
    int sum = odd[0];
    cout<<sum<<" ";
    for (int i = 0; i < even.size(); i++)
    {
        sum += even[i];
        cout<<sum<<" ";
    }

    // k = m+2 to k = n 
    int oddptr = odd.size()-1;
    for (int i = 2; i < n-m; i++)
    {
        if(i%2==0){
            sum -= even[m-1];
        }
        else{
            sum += even[m-1];
        }
        if(sum&1){
            cout<<sum<<" ";
        }
        else{
            cout<<0<<" ";
        }
    }
    if(odd.size()%2==0){
        cout<<0<<endl;
    }
    else{
        cout<<sum+even[m-1]<<endl;
    }
    
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}