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
int n;
string a, b, s, d;
map<string, vector<string>> v;
map<string, int> vis;
map<string, string> level;
int found = 0;
void bfs(string s)
{
    queue<string> q;
    q.push(s);
    vis[s] = 1;
    level[s] = s;
    if (s == b)
    {
        found = 1;
        return;
    }
    while (!q.empty())
    {
        string f = q.front();
        q.pop();
        for (int i = 0; i < v[f].size(); i++)
        {
            string x = v[f][i];
            if (!vis[x])
            {
                vis[x] = 1;
                q.push(x);
                level[x] = f;
                if (x == b)
                {
                    found = 1;
                    return;
                }
            }
        }
    }
}
void solve()
{
    int cs = 0;
    while (cin >> n)
    {
        if (cs)
            cout << endl;
        cs++;
        v.clear();
        vis.clear();
        level.clear();
        found = 0;

        while (n--)
        {
            cin >> a >> b;
            // cout << a << ' ' << b << endl;
            v[a].pb(b);
            v[b].pb(a);
        }
        cin >> a >> b;
        // fore(v)
        // {
        //     cout << x.first << '-';
        //     print(x.second);
        // }
        bfs(a);
        if (!found)
            cout << "No route\n";
        else
        {
            vector<string> ans;
            string cur = b;
            while (1)
            {
                ans.pb(cur);
                if (level[cur] == cur)
                    break;
                cur = level[cur];
            }
            for (int i = ans.size() - 1; i > 0; i--)
            {
                cout << ans[i] << ' ' << ans[i - 1] << endl;
            }
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