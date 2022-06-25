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
int r, c, i, n, a, x;
pii s, d;
int v[1005][10005];
map<pii, int> level;
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
bool valid(int x, int y)
{
    if (x >= 0 && x < r && y < c && y >= 0)
    {
        return v[x][y] != -1;
    }
    else
        return false;
}
void bfs(pii s)
{
    level.clear();
    queue<pii> q;
    q.push(s);
    // level[s] = 0;
    v[s.X][s.Y] = 0;
    while (!q.empty())
    {
        pii u = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int xx = u.X + dx[i];
            int yy = u.Y + dy[i];
            if (valid(xx, yy) && v[xx][yy] == 0)
            {
                q.push({xx, yy});
                // level[{xx, yy}] = level[{u.X, u.Y}] + 1;
                v[xx][yy] = v[u.X][u.Y] + 1;
                if (xx == d.X && yy == d.Y)
                    return;
            }
        }
    }
}
void solve()
{
    while (cin >> r >> c)
    {
        if (r + c == 0)
            break;
        FILL(v, 0);
        cin >> x;
        while (x--)
        {
            cin >> i;
            cin >> n;
            while (n--)
            {
                cin >> a;
                v[i][a] = -1;
            }
        }

        cin >> s.X >> s.Y;
        cin >> d.X >> d.Y;
        // for (int i = 0; i < r; i++)
        // {
        //     cout << i << '-';
        //     print(v[i]);
        // }
        bfs(s);
        // fore(level) cout << x.first.first << ',' << x.first.second << ' ' << x.second << endl;
        // cout << level[d] << endl;
        cout << v[d.X][d.Y] << endl;
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