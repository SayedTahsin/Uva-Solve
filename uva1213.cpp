//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
#include <algorithm>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)

#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define yes cout << "yes" << endl
#define No cout << "No" << endl
#define NO cout << "NO" << endl
#define no cout << "no" << endl

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define X first
#define Y second

#define FILL(x, y) memset(x, y, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fore(arr) for (auto &x : (arr))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x *(y / gcd(x, y))
#define toint(c) c - 48
#define tochar(c) c + 48

#define MAX 214748364
#define MOD 1000000007
#define bug cout << "*_*\n"

using namespace std;
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
bool is_prime(ll n)
{
    if (n <= 1)
        return 0;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
ll Pow(ll c, ll d)
{
    return d == 0 ? 1 : c * pow(c, d - 1);
}
template <class T>
void print(vector<T> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}
int ciel(double a, double b)
{
    return (a + (b - 1)) / b;
}
vector<int> prime;
bool isprime[1201];
void sieve()
{
    for (int i = 2; i * i <= 1200; i++)
    {
        if (!isprime[i])
        {
            for (int j = i * i; j <= 1200; j += i)
                isprime[j] = 1;
        }
    }
    prime.pb(2);
    for (int i = 3; i <= 1200; i += 2)
    {
        if (!isprime[i])
            prime.pb(i);
    }
}
int n, k;
ll dp[200][15][1200];
ll f(int i, int j, ll sum)
{
    if (j == 0)
        return sum == n;

    if (dp[i][j][sum] != -1)
        return dp[i][j][sum];

    ll a = 0, b = 0;
    if (prime[i] <= n)
    {
        if (sum + prime[i] <= n)
            a = f(i + 1, j - 1, sum + prime[i]);
        b = f(i + 1, j, sum);
    }
    return dp[i][j][sum] = a + b;
}
void solve()
{
    sieve();
    while (cin >> n >> k)
    {
        FILL(dp, -1);
        if (n == 0 && k == 0)
            break;
        cout << f(0, k, 0) << endl;
    }
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}