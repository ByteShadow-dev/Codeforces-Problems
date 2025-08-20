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
    int n;
    cin >> n;
    string ans = "";
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = 1, right = n - 1;
    ans = "L";
    int last = arr[0];
    while (left <= right)
    {
        if (left == right)
        {
            ans += "L";
            last=arr[left];
            left++;
        }
        else
        {
            if (arr[left] > last && arr[right] > last)
            {
                if (arr[left]>arr[right])
                {
                    ans+="LR";
                    left++;
                    last = arr[right];
                    right--;
                }
                else{
                    ans+="RL";
                    last = arr[left];
                    left++;
                    right--;
                }
            }
            else if(arr[left]<last && arr[right]<last){
                if (arr[left]>arr[right])
                {
                    ans+="RL";
                    last = arr[left];
                    left++;
                    right--;
                }
                else{
                    ans+="LR";
                    last = arr[right];
                    left++;
                    right--;
                }
            }
            else{
                ans+="RL";
                last = arr[left];
                left++;
                right--;
            }
        }
    }
    cout<<ans<<endl;
}

int main()
{
    fast_io int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}