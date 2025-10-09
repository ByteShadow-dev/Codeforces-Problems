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

void printArray(vector<int> arr){
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

void solve()
{
    // Solution

    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0;
    int a = 0, b = 0;
    for (auto t : s)
    {
        if (t == 'a')
        {
            a++;
            sum++;
        }
        else
        {
            b++;
            sum--;
        }
    }
    int total_diff = count(s.begin(), s.end(), 'a') - count(s.begin(), s.end(), 'b');
    if (a == 0 || b == 0)
    {
        cout << -1 << endl;
        return;
    }
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }

    if(a-b == 1 || a-b == -1){
        cout<<1<<endl;
        return;
    }

    int prefix = 0;

    map<int, int> last_seen;
    last_seen[prefix] = -1;
    
    int min_length = n;
    
    
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='a'){
            prefix++;
        }
        else{
            prefix--;
        }

        last_seen[prefix] = i;

        if(last_seen.find(prefix - total_diff)!=last_seen.end()){
            int start_index = last_seen[prefix-total_diff];
            int length = i - start_index;
            min_length = min(min_length, length);
        }
    }
    cout << (min_length == n ? -1 : min_length) << '\n';

}

int main()
{
    fast_io int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}