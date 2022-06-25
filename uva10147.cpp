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
    if (cs != 0)
        cout << endl;
    cs++;
    ll n, a, b, m;
    map<ll, pair<ll, ll>> mp;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        mp[i] = {a, b};
    }
    cin >> m;
    vector<pair<ll, ll>> v[n + 1];
    set<pair<ll, ll>> s;
    while (m--)
    {
        cin >> a >> b;
        v[a].pb({b, 0});
        v[b].pb({a, 0});
        s.insert({a, b});
        s.insert({b, a});
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (s.find({i, j}) == s.end())
            {
                ll x1, x2, y1, y2;
                x1 = mp[i].first;
                y1 = mp[i].second;
                x2 = mp[j].first;
                y2 = mp[j].second;
                ll dis = ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
                v[i].pb({j, dis});
                v[j].pb({i, dis});
            }
        }
    }
    int vis[n + 5];
    FILL(vis, -1);
    priority_queue<pair<ll, pair<ll, ll>>, vector<pair<ll, pair<ll, ll>>>, greater<pair<ll, pair<ll, ll>>>> pq;
    pq.push({0, {1, 1}});
    vector<pair<ll, ll>> ans;
    while (!pq.empty())
    {
        ll p = pq.top().second.first;
        ll pw = pq.top().first;
        ll z = pq.top().second.second;
        pq.pop();
        if (vis[p] != -1)
            continue;
        // cout << p << ' ' << pw << ' ' << z << endl;
        if (p != z && pw != 0)
            ans.pb({p, z});
        vis[p] = 1;
        for (int i = 0; i < v[p].size(); i++)
        {
            ll c = v[p][i].first;
            ll cw = v[p][i].second;
            if (vis[c] == -1)
                pq.push({cw, {c, p}});
        }
    }
    if (ans.empty())
        cout << "No new highways need\n";
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            a = ans[i].first, b = ans[i].second;
            cout << min(a, b) << ' ' << max(a, b) << endl;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
}