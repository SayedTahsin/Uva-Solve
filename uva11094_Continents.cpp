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
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

int a, b, n, m;
char ch;
string s;
vector<string> v;
void f(int i, int j)
{
    v[i][j] = '+';
    for (int k = 0; k < 4; k++)
    {
        int x = i + dx[k];
        int y = j + dy[k];
        if (x == n || x < 0)
            continue;
        if (y == m)
            y = 0;
        if (y < 0)
            y = m - 1;
        if (v[x][y] == ch)
            f(x, y);
    }
}
int f1(int i, int j)
{
    v[i][j] = '+';
    int a = 1;
    for (int k = 0; k < 4; k++)
    {
        int x = i + dx[k];
        int y = j + dy[k];
        if (x == n || x < 0)
            continue;
        if (y == m)
            y = 0;
        if (y < 0)
            y = m - 1;
        if (v[x][y] == ch)
        {
            a += f1(x, y);
        }
    }
    return a;
}
void solve()
{
    while (cin >> n >> m)
    {
        v.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            v.pb(s);
        }
        cin >> a >> b;
        ch = v[a][b];
        f(a, b);
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; v[i][j]; j++)
            {
                if (v[i][j] == ch)
                {
                    mx = max(mx, f1(i, j));
                }
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << v[i] << endl;
        // }
        cout << mx << endl;
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