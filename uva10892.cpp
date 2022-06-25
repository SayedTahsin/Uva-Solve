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
vector<ll> dsbl(long long n)
{
    vector<long long> v;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.pb(i);
            if (i != (n / i))
                v.pb(n / i);
        }
    }
    return v;
}

void solve()
{
    ll n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        vector<ll> v = dsbl(n);
        sort(all(v));
        int c = v.size();
        for (int i = v.size() - 1; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (v[i] % v[j] != 0 && lcm(v[i], v[j]) == n)
                {
                    // cout << v[i] << ' ' << v[j] << endl;
                    c++;
                }
            }
        }
        cout << n << ' ' << c << endl;
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