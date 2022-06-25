///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define PI 2 * acos(0.0)
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
#define f first
#define s second
#define all(x) (x).begin(), (x).end()
#define rall(v) (v).rbegin(), (v).rend()
#define fore(arr) for (auto &x : (arr))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define SORT(v) sort((v).begin(), (v).end())
#define FIND(v, x) ((v).find(x) != (v).end())
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x *(y / gcd(x, y))
#define MAX 2000010
#define bug cout << "*_*\n"
using namespace std;
int toint(char c)
{
    return c - 48;
}
char tochar(int c)
{
    return (c + 48);
}
bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
ll pow(int a, int b)
{
    if (b == 0)
        return 1;
    for (ll i = 1; i < b; i++)
    {
        a *= a;
    }
    return a;
}
int n, k, a, m;
vector<int> v;

void solve()
{
    cin >> n;
    v.clear();
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (find(all(v), a) == v.end())
            v.pb(a);
    }
    // fore(v) cout << x << ' ';
    // cout << endl;
    int q;
    cin >> q;
    while (q--)
    {
        cin >> a;
        int l = -1, r = v.size();
        while (l + 1 < r)
        {
            m = (l + r) / 2;
            if (v[m] == a)
            {
                l = m - 1;
                r = m + 1;
                break;
            }
            if (v[m] > a)
                r = m;
            else if (v[m] < a)
                l = m;
        }
        if (l == -1)
        {
            cout << "X ";
        }
        else
            cout << v[l] << ' ';
        if (r == v.size())
        {
            cout << "X\n";
        }
        else
            cout << v[r] << endl;
    }
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}