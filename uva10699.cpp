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

#define MAX 2000010
#define MOD 100000007
#define bug cout << "*_*\n"
using namespace std;

template <class T>
void print(vector<T> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}

vector<int> pr;
void sieve(int n)
{
    vector<bool> _isPrime(n + 1, true);
    _isPrime[0] = _isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (_isPrime[i])
            for (int j = i * i; j <= n; j += i)
                _isPrime[j] = false;
    }
    for (int i = 0; i <= n; i++)
        if (_isPrime[i])
            pr.pb(i);
}
ll factors(ll n)
{
    set<ll> fac;
    int idx = 0;
    int p = pr[idx];
    while (p * p <= n)
    {
        while (n % p == 0)
        {
            n /= p;
            fac.insert(p);
        }
        p = pr[++idx];
    }
    if (n > 1)
        fac.insert(n);

    return fac.size();
}
void solve()
{
    sieve(1e6);
    ll n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        cout << n << " : " << factors(n) << endl;
    }
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}