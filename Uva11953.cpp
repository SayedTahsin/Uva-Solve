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
vector<string> v;
void dfs(int i, int j, int n)
{
    if (i + 1 < n)
    {
        if (v[i + 1][j] == 'x' || v[i + 1][j] == '@')
        {
            v[i + 1][j] = '.';
            dfs(i + 1, j, n);
        }
    }
    if (j + 1 < n)
    {
        if (v[i][j + 1] == 'x' || v[i][j + 1] == '@')
        {
            v[i][j + 1] = '.';
            dfs(i, j + 1, n);
        }
    }
}
void solve()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n;
        cin >> n;
        char x;
        v.clear();
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.pb(s);
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; v[i][j]; j++)
            {
                if (v[i][j] == 'x')
                {
                    count++;
                    v[i][j] = '.';
                    dfs(i, j, n);
                }
            }
        }
        cout << "Case " << k << ": " << count << endl;
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