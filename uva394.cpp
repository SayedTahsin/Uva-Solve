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
    int n;
    vector<int> vx;
    while (cin >> n)
    {
        if (n == 0)
            break;
        vx.pb(n);
    }
    int sz = vx.size();
    for (int k = 0; k < vx.size(); k++)
    {
        n = vx[k];
        int I = 0, v = 0, XX = 0, l = 0, c = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i == 100)
            {
                c++;
                continue;
            }
            int x = i;
            int z = x % 10;
            if (z == 4)
            {
                I++;
                v++;
            }
            else if (z == 9)
            {
                I++;
                XX++;
            }
            else
            {

                I += (z % 5);
                v += (z / 5);
            }
            z = x / 10;
            if (z == 9)
            {
                XX++;
                c++;
            }
            else if (z == 4)
            {
                l++;
                XX++;
            }
            else
            {
                XX += (z % 5);
                l += (z / 5);
            }
        }
        cout << n << ": " << I << " i, " << v << " v, " << XX << " x, " << l << " l, " << c << " c" << endl;
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