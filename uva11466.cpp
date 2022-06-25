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

#define MAX 1e7 + 1
#define MOD 100000007
#define bug cout << "*_*\n"
using namespace std;

template <class T>
void print(vector<T> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}
vector<ll> primes;
bool isPrime[10000001];
void sievePrime()
{
    for (int i = 0; i <= MAX; i++)
        isPrime[i] = true;
    for (int i = 3; i * i <= MAX; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
                isPrime[j] = false;
        }
    }
    primes.pb(2);
    for (int i = 3; i < MAX; i += 2)
        if (isPrime[i])
            primes.pb(i);
}
set<ll> factors(ll n)
{
    set<ll> fac;
    ll idx = 0;
    ll p = primes[idx];
    while (p * p <= n)
    {
        while (n % p == 0)
        {
            n /= p;
            fac.insert(p);
        }
        p = primes[++idx];
    }
    if (n > 1)
        fac.insert(n);
    return fac;
}
void solve()
{
    ll n;
    sievePrime();

    while (cin >> n)
    {
        if (n < 0)
            n *= (-1);

        if (n == 0)
            break;
        set<ll> v = factors(n);
        if (v.size() < 2)
            cout << -1 << endl;
        else
        {

            auto it = v.end();
            it--;
            cout << *it << endl;
        }
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