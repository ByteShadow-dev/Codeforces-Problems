#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define int long long
#define vi vector<long long>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
const int INF = 1e9 + 5;
const ll LINF = 1e18;

void printArr(vector<int> arr){
for(auto i:arr){
cout<<i<<" ";}
cout<<endl;
}
vi ans;

void xyz(int pos, int cnt, int curr){
    if(pos==18){
        ans.push_back(curr);
        return;
    }

    xyz(pos+1, cnt, curr*10);

    if(cnt<3){
        for(int i = 1; i<=9; i++){
            xyz(pos+1, cnt + 1, curr*10 + i);
        }
    }
}

void solve(vi & ans) {
    int l, r;
    cin >> l >> r;
    int ansvalue = upper_bound(ans.begin(), ans.end(), r) -lower_bound(ans.begin(), ans.end(), l);
    cout<<ansvalue<<endl;
}

int32_t main() {
    fast_io
    xyz(0, 0, 0);
    ans.push_back(1000000000000000000);
    int32_t T = 1;
    cin >> T;
    while (T--) solve(ans);
    return 0;
}