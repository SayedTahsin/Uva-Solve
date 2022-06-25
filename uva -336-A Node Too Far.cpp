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
vector<int> v[100000];
bool vis[100000];
int level[100000];
vector<int> lv;
queue<int> q;
int c = 0;
void bfs(int s)
{
    FILL(vis, 0);
    FILL(level, 0);
    vis[s] = 1;
    level[s] = 0;
    q.push(s);
    c = 1;
    while (!q.empty())
    {

        int f = q.front();
        q.pop();
        // cout << f << ' ';
        for (int i = 0; i < v[f].size(); i++)
        {
            if (!vis[v[f][i]])
            {
                q.push(v[f][i]);
                vis[v[f][i]] = 1;
                level[v[f][i]] = level[f] + 1;
                if (level[v[f][i]] > b)
                    break;
                else
                    c++;
            }
        }
    }
}
void solve()
{
    int cs = 1;
    while (cin >> n)
    {
        if (!n)
            break;
        fore(v) x.clear();
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            v[a].pb(b);
            v[b].pb(a);
            s.insert(a);
            s.insert(b);
        }
        while (cin >> a >> b)
        {
            c = 0;
            if (a + b == 0)
                break;
            if (s.find(a) != s.end())
                bfs(a);
            // cout << endl;
            cout << "Case " << cs++ << ": " << s.size() - c << " nodes not reachable from node " << a << " with TTL = " << b << ".\n";
        }
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
