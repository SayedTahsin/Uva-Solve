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
bool exists(queue<ll> q, ll a)
{
    queue<ll> temp = q;
    while (!temp.empty())
    {
        if (a == temp.front())
            return true;
        temp.pop();
    }
    return false;
}
void solve()
{
    string s;
    set<string> m;
    while (getline(cin, s))
    {
        string temp = "";
        for (int i = 0; s[i]; i++)
        {
            char x = s[i];
            if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
            {
                x = tolower(x);
                temp += x;
            }
            else
            {
                if (!temp.empty())
                    m.insert(temp);
                temp = "";
            }
        }
        if (!temp.empty())
            m.insert(temp);
    }
    int z = m.size(), i = 0;
    fore(m)
    {
        i++;
        if (!x.empty())
            cout << x << endl;
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