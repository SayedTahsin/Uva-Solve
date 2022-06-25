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
#define pll pair<ll, ll>

#define PQiimn priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>
#define PQllmn priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>>
#define PQiimx priority_queue<pair<int, int>>
#define PQllmx priority_queue<pair<ll, ll>>
#define PQ priority_queue<int>

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
#define MOD 1000000007
#define eps 1e-9

#define bug cout << "*_*\n"

using namespace std;
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int dxk[] = {-2, -2, -1, -1, 1, 2, 2, 1};
int dyk[] = {1, -1, 2, -2, 2, 1, -1, -2};
int dx1[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy1[] = {1, 1, 1, 0, 0, -1, -1, -1};
bool is_prime(ll n)
{
    if (n <= 1)
        return 0;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
ll Pow(ll c, ll d)
{
    return d == 0 ? 1 : c * pow(c, d - 1);
}
template <class T>
void print(vector<T> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}
void solve()
{
    int c, s, q;
    int a, b, w;
    int cs = 1;
    while (cin >> c >> s >> q && (c + s + q))
    {
        if (cs != 1)
            cout << endl;

        vector<pair<int, int>> v[c + 1];
        while (s--)
        {
            cin >> a >> b >> w;
            v[a].pb({b, w});
            v[b].pb({a, w});
        }
        vector<pair<int, int>> ans[c + 1];
        int vis[c + 1];
        FILL(vis, -1);
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        for (int k = 1; k <= c; k++)
        {
            if (vis[k] == -1)
            {
                // cout << k << endl;
                pq.push({0, {k, -1}});
            }
            while (!pq.empty())
            {
                int p = pq.top().second.first;
                int pw = pq.top().first;
                int par = pq.top().second.second;
                pq.pop();
                if (vis[p] != -1)
                    continue;
                if (par != -1)
                {
                    ans[par].pb({p, pw});
                    ans[p].pb({par, pw});
                }
                vis[p] = pw;
                for (int i = 0; i < v[p].size(); i++)
                {
                    int cur = v[p][i].first;
                    int cw = v[p][i].second;
                    if (vis[cur] == -1)
                    {
                        pq.push({cw, {cur, p}});
                    }
                }
                // cout << k << ' ' << vis[k] << endl;
            }
        }
        // for (int i = 1; i <= c; i++)
        // {
        // cout << i << endl;
        // fore(ans[i]) cout << x.first << ' ' << x.second << endl;
        // cout << vis[i] << ' ';
        // }
        cout << "Case #" << cs++ << endl;
        while (q--)
        {
            cin >> a >> b;

            int arr[c + 1];
            FILL(arr, -1);
            arr[a] = 0;
            stack<int> stk;
            stk.push(a);
            while (!stk.empty())
            {
                int x = stk.top();
                stk.pop();
                // cout << x << endl;
                if (x == b)
                    break;
                for (int i = 0; i < ans[x].size(); i++)
                {
                    int cur = ans[x][i].first;
                    int cw = ans[x][i].second;
                    if (arr[cur] == -1)
                    {
                        arr[cur] = max(arr[x], cw);
                        stk.push(cur);
                    }
                }
            }
            if (arr[b] == -1)
            {
                cout << "no path\n";
            }
            else
            {
                cout << arr[b] << endl;
            }
        }
    }
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}