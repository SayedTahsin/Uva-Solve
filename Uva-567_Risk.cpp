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
int n, a, b;
vector<int> v[21];
int vis[21];
int level[21];
void bfs(int s)
{
    // cout << s << endl;
    vis[s] = 1;
    level[s] = 0;
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        // cout << f << ' ' << level[f] << endl;
        for (int i = 0; i < v[f].size(); i++)
        {
            int x = v[f][i];
            // cout << x << ' ';
            if (!vis[x])
            {
                q.push(x);
                vis[x] = 1;
                level[x] = level[f] + 1;
            }
        }
        // cout << endl;
    }
}
void solve()
{
    int cs = 1;
    while (cin >> n)
    {
        while (n--)
        {
            cin >> a;
            v[1].pb(a);
            v[a].pb(1);
        }
        for (int i = 2; i <= 19; i++)
        {
            cin >> n;
            while (n--)
            {
                cin >> a;
                v[i].pb(a);
                v[a].pb(i);
            }
        }
        // for (int i = 1; i <= 20; i++)
        // {
        //     cout << i << '-';
        //     print(v[i]);
        // }
        cin >> n;
        cout << "Test Set #" << cs++ << endl;
        while (n--)
        {
            FILL(vis, 0);
            FILL(level, 0);
            cin >> a >> b;
            bfs(a);
            cout << right << setw(2) << a << " to " << setw(2) << b << ": " << level[b] << endl;
        }
        cout << endl;
        for (int i = 1; i <= 20; i++)
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
