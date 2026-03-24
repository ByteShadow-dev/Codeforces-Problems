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
cout<<i<<" ";}
cout<<endl;
}
int N = 2 * 1e5;

vector<vi> primes(N + 1);
void sieve(vector<vi>& primes, int N){
    for (int i = 2; i <= N; i++)
    {
        if(!primes[i].empty())continue;
        else{
            for (int j = i; j <= N; j+=i)
            {
                primes[j].push_back(i);
            }
            
        }
    }
    
}

void solve(vector<vi> & primes) {
    
    int n;
    cin >> n;
    vi a(n), b(n);
    forin(a, n);
    forin(b, n);
    int ans = 2;
    map<int, int> cnt;
    for(int i = 0; i<n; i++){
        for(auto x : primes[a[i]]){
            cnt[x]++;
            if(cnt[x] > 1){
                ans = 0;
                cout<<ans<<endl;
                return;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for(auto x : primes[a[i]]){
            cnt[x]--;
        }
        for(auto x : primes[a[i] + 1]){
            if(cnt[x] > 0){
                ans = min(ans, 1ll);
            }
        }
        for(auto x : primes[a[i]]){
            cnt[x]++;
        }
    }
    cout<<ans<<endl;

    

}

int32_t main() {
    fast_io
    int32_t T = 1;
    
    sieve(primes, N);
    cin >> T;
    while (T--) solve(primes);
    return 0;
}