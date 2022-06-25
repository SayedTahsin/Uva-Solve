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

bool is_prime(ll n)
{
    if (n <= 1)
        return 0;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
template <class T>
void print(vector<T> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}
bool dif(string a, string b)
{
    int c = 0;
    for (int i = 0; a[i]; i++)
    {
        if (a[i] != b[i])
            c++;
        if (c > 1)
            return false;
    }
    return c == 1;
}
string s, a, b, x;
vector<string> v;
map<string, int> level;
void bfs(string a, string b)
{
    queue<string> q;
    q.push(a);
    level[a] = 1;
    while (!q.empty())
    {
        string u = q.front();
        q.pop();
        // cout<<u<<endl;
        for (int i = 0; i < v.size(); i++)
        {
            x = v[i];
            if (u.size() != x.size())
                continue;
            if (level[x] == 0 && dif(u, x))
            {
                q.push(x);
                level[x] = level[u] + 1;
            }
        }
    }
}
void solve()
{
    int t;
    cin >> t;
    for (int cs = 0; cs < t; cs++)
    {
        if (cs != 0)
            cout << endl;
        v.clear();
        while (cin >> a && a != "*")
            v.pb(a);
        cin.ignore();
        while (getline(cin, s) && s != "")
        {
            level.clear();
            stringstream ss(s);
            ss >> a >> b;
            bfs(a, b);
            cout << a << ' ' << b << ' ';
            cout << level[b] - 1 << endl;
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