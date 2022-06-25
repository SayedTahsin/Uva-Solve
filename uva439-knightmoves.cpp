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
#define bug cout << "*_*\n"

using namespace std;
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
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
int arr[9][9];
string a, b;
int dxk[] = {-2, -2, -1, -1, 1, 2, 2, 1};
int dyk[] = {1, -1, 2, -2, 2, 1, -1, -2};
int sx, sy, dx1, dy1;
void f(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    arr[i][j] = 0;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        if (x == dx1 && y == dy1)
            return;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int x1 = x + dxk[i];
            int y1 = y + dyk[i];
            if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8)
                continue;
            if (arr[x1][y1] == -1)
            {
                arr[x1][y1] = arr[x][y] + 1;
                q.push({x1, y1});
            }
        }
    }
}
void solve()
{
    while (cin >> a >> b)
    {
        FILL(arr, -1);
        sx = a[0] - 96;
        sy = a[1] - 48;
        dx1 = b[0] - 96;
        dy1 = b[1] - 48;
        f(sx, sy);
        cout << "To get from " << a << " to " << b << " takes " << arr[dx1][dy1] << " knight moves." << endl;
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