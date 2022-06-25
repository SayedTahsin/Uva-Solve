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
    char c;
    vector<pair<pair<double, double>, pair<double, double>>> v;
    while (cin >> c)
    {
        if (c == '*')
            break;
        double x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        v.pb({{x1, y1}, {x2, y2}});
    }
    double a, b;
    int k = 1;
    while (cin >> a >> b)
    {
        int flag = 1;
        if (a == 9999.9 && b == 9999.9)
            break;
        for (int i = 0; i < v.size(); i++)
        {
            double x1 = v[i].first.first;
            double y1 = v[i].first.second;
            double x2 = v[i].second.first;
            double y2 = v[i].second.second;
            if (a > x1 && a < x2)
            {
                if (b < y1 && b > y2)
                {
                    cout << "Point " << k << " is contained in figure " << i + 1 << endl;
                    flag = 0;
                }
            }
        }
        if (flag)
        {
            cout << "Point " << k << " is not contained in any figure" << endl;
        }
        k++;
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
    //cin >> t;
    while (t--)
    {
        solve();
    }
}