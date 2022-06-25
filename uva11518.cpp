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

#define MAX 214748364
#define MOD 100000007
#define bug cout << "*_*\n"
using namespace std;

template <class T>
void print(vector<T> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}
int n, m, l, a, b;
vector<int> v[10001];
int vis[10001];
void dfs(int i)
{
    vis[i] = 1;
    for (int j = 0; j < v[i].size(); j++)
    {
        if (!vis[v[i][j]])
            dfs(v[i][j]);
    }
}
void solve()
{
    cin >> n >> m >> l;
    while (m--)
    {
        cin >> a >> b;
        v[a].pb(b);
    }
    while (l--)
    {
        cin >> a;
        dfs(a);
    }
    int c = 0;
    for (int i = 1; i <= n; i++)
        if (vis[i])
            c++;

    cout << c << endl;

    FILL(vis, 0);
    for (int i = 1; i <= n; i++)
        v[i].clear();
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