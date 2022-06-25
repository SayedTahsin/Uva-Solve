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
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        queue<int> q;
        for (int i = 1; i <= n; i++)
        {
            q.push(i);
        }
        vector<int> v;
        while (!q.empty())
        {
            int x = q.front();
            v.pb(x);
            q.pop();
            x = q.front();
            q.push(x);
            q.pop();
        }
        cout << "Discarded cards:";
        for (int i = 0; i < v.size() - 1; i++)
        {
            cout << ' ' << v[i];
            if (i != v.size() - 2)
                cout << ",";
        }
        cout << "\nRemaining card: ";
        cout << v[n - 1] << endl;
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