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
    string s;
    cin >> s;
    // ** infinite
    // *>><>*
    int n = s.length();
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    int st = 0, end = n - 1;
    while (st < end)
    {
        if (s[st] != '>')
            st++;
        if (s[end] != '<')
            end--;
        if (s[st] == '>' && s[end] == '<' && st<end)
        {
            cout << -1 << endl;
            return;
        }
    }

    st = 0, end = n - 1;
    while (st < end)
    {
        if (s[st] != '>')
            st++;
        if (s[end] != '*')
            end--;
        if (s[st] == '>' && s[end] == '*' && st<end)
        {
            cout << -1 << endl;
            return;
        }
    }

    st = 0, end = n - 1;
    while (st < end)
    {
        if (s[st] != '*')
            st++;
        if (s[end] != '<')
            end--;
        if (s[st] == '*' && s[end] == '<' && st<end)
        {
            cout << -1 << endl;
            return;
        }
    }

    // check for multiple **
    int countx = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            countx++;
        }
        if (countx == 2)
        {
            cout << -1 << endl;
            return;
        }
    }

    // check for consecutive <<<< and >>>
    int curr = 0, maxCount = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        if (s[i] == '>' || s[i] == '<')
        {
            curr++;
            if(i>0 && s[i-1]=='*') curr++;
            while (i < n - 1 && (s[i + 1] == s[i] || s[i + 1] == '*'))
            {
                curr++;
                i++;
            }
        }
        maxCount = max(maxCount, curr);
    }
    cout << maxCount << endl;
    
    
}

int main()
{
    fast_io int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}