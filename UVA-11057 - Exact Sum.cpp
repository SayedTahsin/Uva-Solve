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

void solve()
{
    int n;
    while (cin >> n)
    {
        vector<int> v(n);
        fore(v) cin >> x;
        cin.ignore();
        sort(all(v));
        int q;
        cin >> q;
        int idx = lower_bound(all(v), q) - v.begin();
        v.erase(v.begin() + idx, v.end());
        // fore(v) cout << x << ' ';
        // cout << endl;
        map<int, pair<int, int>> mp;
        for (int i = 0; i < v.size(); i++)
        {
            int l = i, r = v.size();
            while (l + 1 < r)
            {
                int m = (l + r) / 2;
                if (v[i] + v[m] == q)
                {
                    // cout << v[i] << ' ' << v[m] << endl;
                    int dif = abs(v[i] - v[m]);
                    mp[dif] = {v[i], v[m]};
                    break;
                }
                if (v[i] + v[m] > q)
                    r = m;
                else
                    l = m;
            }
        }
        auto it = mp.begin();
        cout << "Peter should buy books whose prices are " << it->second.first << " and " << it->second.second << "." << endl;
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
    //cin >> t;
    while (t--)
    {
        solve();
    }
}