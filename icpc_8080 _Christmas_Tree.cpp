///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>

#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define yes cout << "yes" << endl
#define No cout << "No" << endl
#define NO cout << "NO" << endl
#define no cout << "no" << endl

#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define PI 2 * acos(0.0)
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fore(arr) for (auto &x : (arr))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define SORT(v) sort((v).begin(), (v).end())
#define FIND(v, x) ((v).find(x) != (v).end())
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x *(y / gcd(x, y))
#define MAX 2000010
#define MOD 1000000007
#define bug cout << "*_*\n"
using namespace std;
void print(vector<ll> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}
bool is_prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
ll ciel(ll a, ll b)
{
    return (a + (b - 1)) / b;
}
int toint(char c)
{
    return c - 48;
}
char tochar(int c)
{
    return (c + 48);
}
bool is_pel(string s)
{
    ll n = s.length() - 1;
    bool flag = true;
    for (int i = 0; i < s.length() / 2; i++, n--)
    {
        if (s[i] != s[n])
            flag = false;
    }
    return flag;
}
vector<int> v[1005];
void dfs(int i)
{
    for (int j = 0; j < v[i].size(); j++)
    {
        int x = v[i][j];
        dfs(x);
        v[x].clear();
    }
}
void pr(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << '-';
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}
void solve()
{
    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        int n, k;
        cin >> n >> k;

        for (int i = 1; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v[a].pb(b);
        }
        int sum = 1;
        for (int i = 1; i <= n; i++)
        {
            if (v[i].size() == k)
            {
                sum += k;
            }
            else if (v[i].size() > k)
            {
                multimap<int, int> mp;
                for (int j = 0; j < v[i].size(); j++)
                {
                    int x = v[i][j];
                    mp.insert({v[x].size(), x});
                }
                int j = 1;
                for (auto it = mp.begin(); j <= (v[i].size() - k) || it != mp.end(); it++, j++)
                {
                    int x = it->second;
                    dfs(x);
                }
                sum += k;
            }
            else
            {
                dfs(i);
            }
        }
        // pr(n);
        cout << "Case " << q << ": ";
        cout << sum << endl;
        memset(v, 0, sizeof(v));
    }
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}