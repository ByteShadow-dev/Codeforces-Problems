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
    int score = 0;
    int n;
    cin >> n;
    vi arr(n);
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 0)
            score++;
        else
            score += temp;
    }
    cout << score << endl;
}

int main()
{
    fast_io int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}