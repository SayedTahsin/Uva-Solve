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
string strDIV(string s, ll n)
{
    ll x = 0;
    string ans = "";
    for (ll i = 0; s[i]; i++)
    {
        x = x * 10 + s[i] - 48;
        while (x < n && x != 0)
        {
            i++;
            if (i == s.length())
            {
                i--;
                break;
            }
            x = x * 10 + s[i] - 48;
        }
        ans += (x / n) + 48;
        x = x % n;
    }
    return ans;
}
string strMOD(string s, ll n)
{
    ll x = 0;
    string ans = "";
    for (ll i = 0; s[i]; i++)
    {
        x = x * 10 + s[i] - 48;
        while (x < n && x != 0)
        {
            i++;
            if (i == s.length())
            {
                i--;
                break;
            }
            x = x * 10 + s[i] - 48;
        }
        ans += (x / n) + 48;
        x = x % n;
    }
    return to_string(x);
}
void solve()
{
    string s;
    ll a;
    char x;
    while (cin >> s >> x >> a)
    {
        if (x == '/')
        {
            cout << strDIV(s, a) << endl;
        }
        else
        {
            cout << strMOD(s, a) << endl;
            ;
        }
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
    //cin >> t;
    while (t--)
    {
        solve();
    }
}