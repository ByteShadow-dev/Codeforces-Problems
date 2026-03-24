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
    int n, k;
    cin >> n >> k;
    vi allDivisors = divisors(n);
    sort(allDivisors.begin(), allDivisors.end());
    vector<string> vs(k);
    for (int i = 0; i < k; i++)
    {
        cin >> vs[i];
    }

    vector<vector<bool>> present(n, vector<bool>(26, false));
    for (int u = 0; u < k; u++)
    {
        for (int i = 0; i < n; i++)
        {
            present[i][vs[u][i] - 'a'] = true;
        }
    }
    int ans = 0;
    for (int i = 0; i < allDivisors.size(); i++)
    {
        int d = allDivisors[i];
        bool divisorFound = true;
        for (int j = 0; j < d; j++)
        {
            bool foundCommon = false;
            for (int c = 0; c < 26 && !foundCommon; c++)
            {
                bool good = true;
                for (int pos = j; pos < n; pos += d)
                {
                    if (!present[pos][c])
                    {
                        good = false;
                        break;
                    }
                }
                if (good)
                    foundCommon = true;
            }
            if(!foundCommon){
                divisorFound = false;
                break;
            }
        }
        if (divisorFound)
        {
            ans = d;
            break;
        }
    }
    string ansString = "";
    for (int i = 0; i < ans; i ++)
    {
        for (int c = 0; c < 26; c++)
        {
            bool valid = true;
            for (int j = i; j < n; j+=ans)
            {
                if (!present[j][c])
                {
                    valid = false;
                    break;
                }
            }
            if (valid)
            {
                ansString += (c + 'a');
                break;
            }
        }
    }

    int multiplier = n/ans;
    string finalAns = "";
    for(int i = 0; i<multiplier; i++){
        finalAns += ansString;
    }
    cout << finalAns << endl;
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