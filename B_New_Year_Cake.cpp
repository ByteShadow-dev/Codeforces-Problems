#include <bits/stdc++.h>
using namespace std;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define int long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
const int INF = 1e9 + 5;
const ll LINF = 1e18;

void solve()
{
    int w, b;
    cin >> w >> b;
    int temp1 = w, temp2 = b;
    // int black_layers = 0, white_layers = 0;
    // // black chocolate can fill how many layers?
    // // if white comes first
    // int ans = 0;
    // int x = 0;
    if(w==1){
        if(b==1){
            cout<<1<<endl;
            return;
        }
        else if(b>=2){
            cout<<2<<endl;
            return;
        }
    }
    if(b==1){
        if(w==1){
            cout<<1<<endl;
            return;
        }
        else if(w>=2){
            cout<<2<<endl;
            return;
        }
    }
    // while (((1<<(2*x)) -1)/3<w)
    // {
    //     x++;
    // }
    // if(((1<<(2*x)) -1)/3 == w){
    //     white_layers = 2*x - 1;
    // }
    // else{
    //     white_layers = 2*(x-1) - 1;
    // }
    // int y = 0;
    // while (2*(((1<<(2*y)) -1)/3)<b)
    // {
    //     y++;
    // }
    // if(2*(((1<<(2*y)) -1)/3) == b){
    //     black_layers = 2*y;
    // }
    // else{
    //     black_layers = 2*(y-1);
    // }
    // if(abs(max(white_layers, black_layers) - min(white_layers, black_layers))==1){
    //     ans = max(white_layers, black_layers);
    // }
    // x = 0;
    // while (((1<<(2*x)) -1)/3<b)
    // {
    //     x++;
    // }
    // if(((1<<(2*x)) -1)/3 == b){
    //     black_layers = 2*x - 1;
    // }
    // else{
    //     black_layers = 2*(x-1) - 1;
    // }
    // y = 0;
    // while (2*(((1<<(2*y)) -1)/3)<w)
    // {
    //     y++;
    // }
    // if(2*(((1<<(2*y)) -1)/3) == w){
    //     white_layers = 2*y;
    // }
    // else{
    //     white_layers = 2*(y-1);
    // }
    // if(abs(max(white_layers, black_layers) - min(white_layers, black_layers))==1){
    //     ans = max({white_layers, black_layers, ans});
    // }
    // cout<<ans<<endl;
    int i = 0;
    int ans = 0;
    while ((1 << i) < temp1 + temp2)
    {
        if ((i & 1) == 0)
        {
            if (w >= (1 << i))
            {
                w -= (1 << i);
            }
            else
            {
                break;
            }
        }
        else
        {
            if (b >= (1 << i))
            {
                b -= (1<<i);
            }
            else
            {
                break;
            }
        }
        i++;
        ans++;
    }
    int curr = ans;
    i = 0;
    ans = 0;
    w = temp1, b = temp2;
    while ((1 << i) < temp1 + temp2)
    {
        if ((i & 1) == 0)
        {
            if (b >= (1 << i))
            {
                b -= (1 << i);
            }
            else
            {
                break;
            }
        }
        else
        {
            if (w >= (1 << i))
            {
                w -= (1<<i);
            }
            else
            {
                break;
            }
        }
        i++;
        ans++;
    }
    cout<<max(curr, ans)<<endl;
}

int32_t main()
{
    fast_io
        int32_t T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}