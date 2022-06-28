///Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define PI 2 * acos(0.0)
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
#define f first
#define s second
#define all(x) (x).begin(), (x).end()
#define rall(v) (v).rbegin(), (v).rend()
#define fore(arr) for (auto &x : (arr))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define SORT(v) sort((v).begin(), (v).end())
#define FIND(v, x) ((v).find(x) != (v).end())
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x *(y / gcd(x, y))
#define MAX 2000010
#define bug cout << "*_*\n"
using namespace std;
int toint(char c)
{
    return c - 48;
}
char tochar(int c)
{
    return (c + 48);
}
bool is_prime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int vis[20] = {0};
vector<int> v[200];
void dfs(int i)
{
    for (int j = 0; j < v[i].size(); j++)
    {
        int x = v[i][j];
        if (vis[x] == 0)
        {
            vis[x] = 1;
            dfs(x);
            break;
        }
    }
}
void solve()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, cur;
        cin >> n;
        cin >> cur;
        int H = 0, L = 0;
        for (int j = 2; j <= n; j++)
        {
            int x;
            cin >> x;
            if (x > cur)
            {
                H++;
            }
            else if (x < cur)
            {
                L++;
            }
            cur = x;
        }
        cout << "Case " << i << ": " << H << " " << L << endl;
    }
}

int main()
{
    // NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}