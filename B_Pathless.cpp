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

void dnfSort(vi &arr){
    int n = arr.size();
    int st = 0, mid = 0, end = n-1;

    while (mid<=end)
    {
        if(arr[mid]==0){
            swap(arr[mid], arr[st]);
            st++, mid++;
        }
        else if(arr[mid]==2){
            mid++;
        }
        else if(arr[mid]==1){
            swap(arr[mid], arr[end]);
            end--;
        }
        
    }
    
}

void printVector(vi v){
    for(auto val : v){
        cout<<val<<" ";
    }
    cout<<endl;
}

void solve() {
    // Solution
    int n, s;
    cin >> n >> s;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // array is has 0,1,2
    // steps of length 1 only
    // can go left and right
    // start at index 1
    int size = arr.size();
    int sumOfVector = 0;
    for (int i = 0; i < size; i++)
    {
        sumOfVector+=arr[i];
    }
    if(sumOfVector>s){
        printVector(arr);
        return;
    }
    else if(s-sumOfVector == 1){
        dnfSort(arr);
        printVector(arr);
        return;
    }
    else{
        cout<<-1<<endl;
    }
    
}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();

    return 0;
}