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
int cs = 0;
void solve()
{
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    vector<pair<int, int>> v[n];
    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].pb({b, c});
        v[b].pb({a, c});
    }
    int vis[n];
    FILL(vis, -1);
    vis[s] = 0;
    PQiimn pq;
    pq.push({0, s});
    while (!pq.empty())
    {
        int f = pq.top().second;
        pq.pop();
        for (int i = 0; i < v[f].size(); i++)
        {
            int c = v[f][i].first;
            int cw = v[f][i].second;
            if (vis[c] == -1)
            {
                vis[c] = vis[f] + cw;
                pq.push({vis[c], c});
            }
            else if (vis[c] > vis[f] + cw)
            {
                vis[c] = vis[f] + cw;
                pq.push({vis[c], c});
            }
        }
    }
    cout << "Case #" << ++cs << ": ";
    if (vis[t] == -1)
        cout << "unreachable\n";
    else
        cout << vis[t] << endl;
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}