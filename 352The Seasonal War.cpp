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
vector<string> v;
int m, n;
void dfs(int i, int j)
{
    if (i - 1 >= 0 && v[i - 1][j] == '1')
    {
        v[i - 1][j] = '0';
        dfs(i - 1, j);
    }
    if (i + 1 < m && v[i + 1][j] == '1')
    {
        v[i + 1][j] = '0';
        dfs(i + 1, j);
    }
    if (j + 1 < m)
    {
        if (v[i][j + 1] == '1')
        {
            v[i][j + 1] = '0';
            dfs(i, j + 1);
        }
        if (i - 1 >= 0 && v[i - 1][j + 1] == '1')
        {
            v[i - 1][j + 1] = '0';
            dfs(i - 1, j + 1);
        }
        if (i + 1 < m && v[i + 1][j + 1] == '1')
        {
            v[i + 1][j + 1] = '0';
            dfs(i + 1, j + 1);
        }
    }
    if (j - 1 >= 0)
    {
        if (v[i][j - 1] == '1')
        {
            v[i][j - 1] = '0';
            dfs(i, j - 1);
        }
        if (i - 1 >= 0 && v[i - 1][j - 1] == '1')
        {
            v[i - 1][j - 1] = '0';
            dfs(i - 1, j - 1);
        }
        if (i + 1 < m && v[i + 1][j - 1] == '1')
        {
            v[i + 1][j - 1] = '0';
            dfs(i + 1, j - 1);
        }
    }
}
void solve()
{
    int i = 1;
    while (cin >> m)
    {
        v.clear();
        for (int i = 1; i <= m; i++)
        {
            string s;
            cin >> s;
            v.pb(s);
        }
        int count = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; v[i][j]; j++)
            {
                if (v[i][j] == '1')
                {
                    count++;
                    v[i][j] = '0';
                    dfs(i, j);
                }
            }
        }
        cout << "Image number " << i << " contains " << count << " war eagles.\n";
        i++;
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
    //cin >> t;
    while (t--)
    {
        solve();
    }
}