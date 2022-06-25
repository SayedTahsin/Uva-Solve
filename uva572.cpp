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
int n, m;
string s;
vector<string> v;
void dfs(int i, int j)
{
    if (i + 1 < n)
    {
        if (v[i + 1][j] == '@')
        {
            v[i + 1][j] = '.';
            dfs(i + 1, j);
        }
        if (j + 1 < m && v[i + 1][j + 1] == '@')
        {
            v[i + 1][j + 1] = '.';
            dfs(i + 1, j + 1);
        }
        if (j - 1 >= 0 && v[i + 1][j - 1] == '@')
        {
            v[i + 1][j - 1] = '.';
            dfs(i + 1, j - 1);
        }
    }
    if (j + 1 < m)
    {
        if (v[i][j + 1] == '@')
        {
            v[i][j + 1] = '.';
            dfs(i, j + 1);
        }
        if (i - 1 >= 0 && v[i - 1][j + 1] == '@')
        {
            v[i - 1][j + 1] = '.';
            dfs(i - 1, j + 1);
        }
    }
    if (i - 1 >= 0)
    {
        if (v[i - 1][j] == '@')
        {
            v[i - 1][j] = '.';
            dfs(i - 1, j);
        }
        if (j - 1 >= 0 && v[i - 1][j - 1] == '@')
        {
            v[i - 1][j - 1] = '.';
            dfs(i - 1, j - 1);
        }
    }
    if (j - 1 >= 0 && v[i][j - 1] == '@')
    {
        v[i][j - 1] = '.';
        dfs(i, j - 1);
    }
}
void solve()
{
    while (cin >> n >> m)
    {
        v.clear();
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            v.pb(s);
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == '@')
                {
                    c++;
                    dfs(i, j);
                }
            }
        }
        cout << c << endl;
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