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
#define MOD 100000007
#define bug cout << "*_*\n"

using namespace std;
template <class T>
void print(vector<T> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}
int n, i, j, m;
vector<int> v[1000];
set<int> s;
int vis[1000];
void dfs(int u)
{
    for (int i = 0; i < v[u].size(); i++)
    {
        int x = v[u][i];
        if (!vis[x])
        {
            s.insert(x);
            vis[x] = 1;
            dfs(x);
        }
    }
}
void solve()
{
    while (cin >> n)
    {
        if (!n)
            break;
        while (cin >> i)
        {
            if (!i)
                break;
            while (cin >> j)
            {
                if (!j)
                    break;
                v[i].pb(j);
            }
        }
        cin >> m;
        while (m--)
        {
            cin >> i;
            s.clear();
            FILL(vis, 0);
            dfs(i);
            cout << n - s.size();
            if (n - s.size() != 0)
                cout << ' ';
            vector<int> ans;
            for (int i = 1; i <= n; i++)
            {
                if (!vis[i])
                    ans.pb(i);
            }
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i];
                if (i != ans.size() - 1)
                    cout << ' ';
            }
            cout << endl;
        }
        for (int i = 1; i <= n; i++)
            v[i].clear();
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