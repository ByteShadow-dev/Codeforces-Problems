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
   string str;
   cin >> str;
   int n = str.length();
   int ans = 0;
   if(str[0]=='u'){
	str[0]='s';
	ans++;
   }
   if(str[n-1]=='u'){
	str[n-1]='s';
	ans++;
   }
   for (int i = 0; i < n; i++)
   {
	while (str[i]=='s')	
	{
		i++;
	}
	if(i<n-1 && str[i+1]=='u'){
		str[i+1]='s';
		ans++;
	}
   }
   cout<<ans<<endl;
   
}

int32_t main() {
    fast_io
    int32_t T = 1;
    cin >> T;
    while (T--) solve();
    return 0;
}