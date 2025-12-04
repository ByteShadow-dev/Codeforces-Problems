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

int binarySearch(vi arr, int target){
    int st  = 0;
    int end = arr.size()-1;
    while (st<end)
    {
        int mid = st + (end - st)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            st = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
    return -1;

}

void solve() {
    // Solution
    int n, a;
    cin >> n >> a;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int left = 0, right = n-1;
    while (left<n && v[left]<a)
    {
        left++;
    }
    while (right>=0 && v[right]>a)
    {
        right--;
    }
    int rightLen = n-right-1;
    if(left>rightLen){
        cout<<--a<<endl;
    }
    else{
        cout<<++a<<endl;
    }
    
    


    
}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}