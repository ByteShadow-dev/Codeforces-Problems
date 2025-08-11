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

bool perfectSquare(long long int n)
{
    int start = 0, end = n;
    if (n <= 1)
    {
        return true;
    }
    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        long long int square = mid * mid;
        if (square == n)
        {
            return true;
        }
        else if ((square) < n)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

void solve()
{
    // Solution
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
    int area = l1*b1 + l2*b2 + l3*b3;
    int side = sqrt(area);
    if (side*side!=area || max({l1, l2, b1, b2, b3, l3}) >side)
    {
        cout<<"NO\n";
        return;
    }
    bool ans = false;
    ans |= (b1 == side && b2 == side && b3 == side && (l1 + l2 + l3)==side);
    ans |= (l1 == side && l2 == side && l3 == side && (b1 + b2 + b3)==side);
    ans |= (b3 == b2 && l2+l3 == side && l1 == side && b2+b1 == side);
    ans |= (l3 == l2 && b2+b3 == side && b1 == side && l2+l1 == side);

    cout<< (ans ? "YES\n" : "NO\n");
}

int main()
{
    fast_io int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}