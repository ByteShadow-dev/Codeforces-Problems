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

bool checkVal(int a, int b){
    int lesser = min(a, b);
    int greater = max(a, b);
    int maxScore = ((lesser+1)*2);
    if(greater<=maxScore){
        return true;
    }
    else{
        return false;
    }
}

void solve() {
    // Solution
    int a, b, c, d; cin>>a>>b>>c>>d;
    // Neither team will score three consecutive goals in the same half
    // first half
    // a = is the score of the RIOL team
    // b = is the score of the KDOI team
    // at the end
    // c = is the score of the RIOL team
    // d = is the score of the KDOI team
    int rGoalsSecond = c-a;
    int kGoalsSecond = d-b;
    if(rGoalsSecond<0 || kGoalsSecond<0){
        cout<<"NO"<<endl;
        return;
    }
    if(checkVal(a, b) && checkVal(rGoalsSecond, kGoalsSecond)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}