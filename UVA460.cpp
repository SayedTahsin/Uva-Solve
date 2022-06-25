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
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        int flag = 0;
        int x1, x2, x3, x4, X1, X2;
        int y1, y2, y3, y4, Y1, Y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> x3 >> y3 >> x4 >> y4;
        if (x1 > x3)
        {
            swap(x1, x3);
            swap(y1, y3);
            swap(x2, x4);
            swap(y2, y4);
        }
        if (x3 >= x1 && x3 < x2)
            X1 = x3;
        else
            flag++;
        if (y3 >= y2 || y4 <= y1)
            flag++;
        X2 = min(x2, x4);
        Y1 = max(y1, y3);
        Y2 = min(y2, y4);
        if (flag)
            cout << "No Overlap\n";
        else
        {
            cout << X1 << ' ' << Y1 << ' ' << X2 << ' ' << Y2 << endl;
        }
        if (t != 0)
            cout << endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
}