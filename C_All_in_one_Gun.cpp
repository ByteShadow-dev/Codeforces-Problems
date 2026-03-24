#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define ll long long
#define all(x) x.begin(), x.end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vi vector<int>
#define vll vector<long long>

// input/output helpers
#define setvec(vec, n)                  \
    do                                  \
    {                                   \
        vec.resize(n);                  \
        rep(i, 0, n) { cin >> vec[i]; } \
    } while (0)
#define printvec(vec, n)                        \
    do                                          \
    {                                           \
        rep(i, 0, n) { cout << vec[i] << " "; } \
        cout << endl;                           \
    } while (0)

// read array macro
#define forin(arr, n)           \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];

const ll LINF = 1e18;

// ------------------- USEFUL FUNCTIONS -------------------

// gcd & lcm
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a / gcd(a, b) * b; }

// fast exponentiation (modular)
ll binexp(ll a, ll b, ll mod)
{
    ll r = 1;
    while (b)
    {
        if (b & 1)
            r = r * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return r;
}

// minimum excluded value (mex)
int mex(vector<int> &a)
{
    unordered_set<int> s(a.begin(), a.end());
    for (int i = 0;; i++)
        if (!s.count(i))
            return i;
}

// prime check
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

// find all divisors
vector<ll> divisors(ll n)
{
    vector<ll> d;
    for (ll i = 1; i * i <= n; i++)
        if (n % i == 0)
        {
            d.push_back(i);
            if (i * i != n)
                d.push_back(n / i);
        }
    return d;
}

// print vector<int>
void printArr(vector<int> arr)
{
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
}

// sieve storing prime factors for every number
void sieve(vector<vi> &primes, int N)
{
    for (int i = 2; i <= N; i++)
        if (primes[i].empty())
            for (int j = i; j <= N; j += i)
                primes[j].push_back(i);
}

// ------------------- SOLVE -------------------

void solve()
{
    int n, h, k;
    cin >> n >> h >> k;
    vi a(n);
    int total_damage = 0;
    vector<ll> prefixSumA(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total_damage += a[i];
        prefixSumA[i] = a[i];
        if (i - 1 >= 0)
        {
            prefixSumA[i] += prefixSumA[i - 1];
        }
    }
    int mags = (h-1)/total_damage;
    int time = 0;
    time = n*(mags) + k*(mags);
    h -= total_damage*(mags);
    vector<ll> maxFromRight(n);
    maxFromRight[n - 1] = a[n - 1];

    for (ll i = n - 2; i >= 0; i--)
    {
        maxFromRight[i] = max(maxFromRight[i + 1], a[i]);
    }

    ll minFromLeft = a[0];

    for (ll i = 0; i < n; i++)
    {
        minFromLeft = min(minFromLeft, a[i]);
        ll currSum = prefixSumA[i] - minFromLeft + maxFromRight[i + 1];

        if (h <= currSum || h <= prefixSumA[i])
        {
            cout << time + i + 1 << "\n";
            return;
        }
    }
    // cout << time << endl;
}

// ------------------- MAIN -------------------

int32_t main()
{
    fast_io
        int32_t T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}

/*
STL + BIT TIPS (Quick Reference)

sort(v.begin(), v.end());
reverse(v.begin(), v.end());
lower_bound / upper_bound
priority_queue (max heap)
priority_queue<int, vector<int>, greater<int>> (min heap)
set / multiset / map / unordered_map

// bit tricks
bool bit = (x >> i) & 1;
x |= (1<<i);
x &= ~(1<<i);
x ^= (1<<i);

__builtin_popcount(x);
__builtin_popcountll(x);

bool isPow2 = (x && !(x & (x-1)));
*/