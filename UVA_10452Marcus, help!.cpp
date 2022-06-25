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
    return (c - 48);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    char arr[n + 5][m + 5];
    int x, y;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '@')
            {
                x = i;
                y = j;
            }
        }
    }
    string s = "IEHOVA#";
    int i = 0;
    while (1)
    {
        if (arr[x][y + 1] == s[i])
        {
            i++;
            cout << "right";
            y++;
        }
        else if (arr[x][y - 1] == s[i])
        {
            i++;
            cout << "left ";
            y--;
        }
        else if (arr[x - 1][y] == s[i])
        {
            i++;
            cout << "forth";
            x--;
        }
        if (i == s.length())
            break;
        else
            cout << " ";
    }
    cout << endl;
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}