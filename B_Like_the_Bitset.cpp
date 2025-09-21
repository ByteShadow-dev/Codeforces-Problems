#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
	ios::sync_with_stdio(false); \
	cin.tie(nullptr);
#define ll long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
const int INF = 1e9 + 5;
const ll LINF = 1e18;

void solve()
{
	// Solution
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	s = " " + s;
	for (int i = 1, j = 1; i <= n; i = ++j) // Good technique
	{
		if (s[i] == '1')
		{
			while (j < n && s[j + 1] == '1')
			{
				j++;
			}
			if (j - i + 1 >= k)
			{
				cout<<"no"<<endl;
				return;
			}
		}
	}
	cout<<"yes"<<endl;
	int c1 = 0, c2 = 0;
	for(auto t:s){
		if(t=='1'){
			c2++;
		}
	}
	for(int i = 1; i<=n; i++){
		if(s[i]=='1'){
			cout<<++c1<<" ";
		}
		else{
			cout<<++c2<<" ";
		}
	}
	cout<<endl;

	

}

int main()
{
	fast_io int T = 1;
	cin >> T;
	while (T--)
		solve();
	return 0;
}