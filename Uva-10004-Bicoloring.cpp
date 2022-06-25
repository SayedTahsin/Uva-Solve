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
int n, e, a, b;
bool vis[1000];
vector<int> v[1000];
int lavel[1000];
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    vis[u] = 1;
    lavel[u] = 0;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        // cout << f << " ";
        for (int i = 0; i < v[f].size(); i++)
        {
            int x = v[f][i];
            if (!vis[x])
            {
                q.push(x);
                vis[x] = true;
                lavel[x] = lavel[f] + 1;
            }
        }
    }
}
void solve()
{
    while (cin >> n)
    {
        if (!n)
            break;
        cin >> e;
        for (int i = 0; i < n; i++)
            v[i].clear();
        FILL(lavel, 0);
        FILL(vis, 0);
        for (int i = 0; i < e; i++)
        {
            cin >> a >> b;
            v[a].pb(b);
            v[b].pb(a);
        }
        bfs(0);

        int cy = 1;
        for (int i = 0; i < n; i++)
        {
            int y = lavel[i];
            fore(v[i])
            {
                if (lavel[x] == y)
                {
                    cout << "NOT BICOLORABLE.\n";
                    cy = 0;
                    break;
                }
            }
            if (!cy)
                break;
        }
        if (cy)
            cout << "BICOLORABLE.\n";
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
