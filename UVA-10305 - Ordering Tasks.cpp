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
    while (cin >> n >> m)
    {
        if (m + n == 0)
            break;
        int arr[n + 5] = {0};
        vi ans, s1;
        multiset<pair<int, int>> s;
        while (m--)
        {
            int a, b;
            cin >> a >> b;
            s.insert({b, a});
            s1.pb(b);
        }
        for (int i = 0; i < s1.size(); i++)
        {
            for (auto it = s.begin(); it != s.end(); it++)
            {
                if (it->first == s1[i])
                {
                    int z = it->second;
                    if (arr[z] == 0)
                    {
                        ans.pb(z);
                        arr[z] = 1;
                    }
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == 0)
                ans.pb(i);
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
            if (i != (ans.size() - 1))
                cout << " ";
            else
                cout << endl;
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
    //cin >> t;
    while (t--)
    {
        solve();
    }
}