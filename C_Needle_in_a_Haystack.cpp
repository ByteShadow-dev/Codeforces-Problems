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
    string s;
    cin >> s;
    string t;
    cin >> t;
    string x = t;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < x.length(); j++)
        {
            if (x[j] == s[i])
            {
                x.erase(x.begin() + j);
                break;
            }
        }
    }
    if (t.length() - s.length() != x.length())
    {
        cout << "Impossible" << endl;
        return;
    }
    int ptr1 = 0, ptr2 = 0;
    string ans;
    sort(x.begin(), x.end());
    while (ptr1 < s.length() && ptr2 < x.length())
    {
        if (s[ptr1] <= x[ptr2])
        {
            ans.push_back(s[ptr1]);
            ptr1++;
        }
        else
        {
            ans.push_back(x[ptr2]);
            ptr2++;
        }
    }
    if (ptr1 < s.length())
    {
        while (ptr1 < s.length())
        {
            ans.push_back(s[ptr1]);
            ptr1++;
        }
    }
    else
    {
        while (ptr2 < x.length())
        {
            ans.push_back(x[ptr2]);
            ptr2++;
        }
    }

    cout << ans << endl;
}

int main()
{
    fast_io int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}