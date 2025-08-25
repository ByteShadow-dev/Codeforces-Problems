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
    long long k;
    cin >> k;
    long long cur = 9, len = 1;
    while (k - cur * len > 0) {
        k -= cur * len;
        cur *= 10;
        len++;
    }
    string s = to_string(cur / 9 + (k - 1) / len);
    long long ans = 0, pr_sum = 0;
    for (int i = 0; i < (k - 1) % len + 1; i++)
        ans += s[i] - '0';
    for (int i = 0; i < s.length(); i++)
    {
        int num = s[i]-'0';
        if(num){
            ans += (num*(num-1 + 2*pr_sum)/2)*cur/9 + (len - 1) * num * cur/2;
        }
        pr_sum += num;
        len--;
        cur/=10;
    }

    cout<<ans<<endl;
    
}

int main() {
    fast_io
    int T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}