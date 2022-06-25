///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>

#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define yes cout << "yes" << endl
#define No cout << "No" << endl
#define NO cout << "NO" << endl
#define no cout << "no" << endl

#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define PI 2 * acos(0.0)
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fore(arr) for (auto &x : (arr))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define SORT(v) sort((v).begin(), (v).end())
#define FIND(v, x) ((v).find(x) != (v).end())
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x *(y / gcd(x, y))
#define MAX 2000010
#define MOD 1000000007
#define bug cout << "*_*\n"
using namespace std;
void print(vector<int> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}
bool is_prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
ll ciel(ll a, ll b)
{
    return (a + (b - 1)) / b;
}
int toint(char c)
{
    return c - 48;
}
char tochar(int c)
{
    return (c + 48);
}
void solve()
{
    int n, a;
    cin >> n;
    multimap<int, int> S, J;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        J.insert({a, i});
        S.insert({-a, i});
    }
    // fore(S)
    // {
    //     cout << -x.first << ' ' << x.second << endl;
    // }
    // cout << endl;
    // fore(J)
    // {
    //     cout << x.first << ' ' << x.second << endl;
    // }
    int mx = INT_MIN;
    for (auto it = S.begin(); it != S.end(); it++)
    {
        int x = (-1) * it->first;
        int x2 = it->second;
        for (auto it2 = J.begin(); it2 != J.end(); it2++)
        {
            int y = it2->first;
            int y2 = it2->second;
            if (y2 > x2)
            {
                // cout << x << ' ' << y << endl;
                mx = max(mx, (x - y));
            }
        }
    }
    cout << mx << endl;
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}