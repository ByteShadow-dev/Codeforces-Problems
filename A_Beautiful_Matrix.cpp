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
    int matrix[5][5];
    int row, col;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j]==1){
                row = i;
                col = j;
            }
        }
    }
        cout<<(abs(2-row))+abs(2-col);
}

int main() {
    fast_io
    int T = 1;
    // cin >> T;
    while (T--) solve();
    return 0;
}