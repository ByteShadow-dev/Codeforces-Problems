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
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if(arr[i]==-1 && i!=0 && i!=n-1){
			arr[i] = 0;
		}
	}
	if(arr[0]==-1 && arr[n-1]==-1){
		cout<<0<<endl;
		arr[0] = arr[n-1] = 0;
	}
	else if(arr[0]==-1){
			cout<<0<<endl;
			arr[0] = arr[n-1];
	}
	else if(arr[n-1]==-1){
		cout<<0<<endl;
		arr[n-1] = arr[0];
	}
	else{
		int diff = 0 ;
		for (int i = 1; i < n; i++)
		{
			diff += arr[i] - arr[i-1];
		}
		cout<<abs(diff)<<endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}

int main() {
	fast_io
	int T = 1;
	cin >> T;
	while (T--) solve();
	return 0;
}