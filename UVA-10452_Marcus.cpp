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
    map<char, pair<int, int>> mp;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == '@')
                mp['A'] = {i, j};
            else if (arr[i][j] == 'I')
                mp['B'] = {i, j};
            else if (arr[i][j] == 'E')
                mp['C'] = {i, j};
            else if (arr[i][j] == 'H')
                mp['D'] = {i, j};
            else if (arr[i][j] == 'O')
                mp['E'] = {i, j};
            else if (arr[i][j] == 'V')
                mp['F'] = {i, j};
            else if (arr[i][j] == 'A')
                mp['G'] = {i, j};
            else if (arr[i][j] == '#')
                mp['H'] = {i, j};
        }
    }
    auto it = mp.begin();
    auto it2 = mp.begin();
    it2++;
    auto x = mp.end();
    x--;
    for (; it2 != mp.end(); it++, it2++)
    {
        int x1 = it->second.first;
        int x2 = it2->second.first;
        int y1 = it->second.second;
        int y2 = it2->second.second;

        if (y1 == y2)
        {
            for (int i = 1; i <= abs(x2 - x1); i++)
            {
                cout << "forth";
                if (abs(x2 - x1) == i && it2 == x)
                {
                    cout << endl;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else
        {
            if (y1 > y2)
            {
                for (int i = 1; i <= abs(y2 - y1); i++)
                {
                    cout << "left";
                    if (abs(y2 - y1) == i && it2 == x)
                    {
                        cout << endl;
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            else
            {
                for (int i = 1; i <= abs(y2 - y1); i++)
                {
                    cout << "right";
                    if (abs(y2 - y1) == i && it2 == x)
                    {
                        cout << endl;
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
        }
    }
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