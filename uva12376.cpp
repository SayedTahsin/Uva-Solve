//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
#include <algorithm>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)

#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define yes cout << "yes" << endl
#define No cout << "No" << endl
#define NO cout << "NO" << endl
#define no cout << "no" << endl

#define ll long long
#define ull unsigned long long
#define pb push_back

#define FILL(x, y) memset(x, y, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fore(arr) for (auto &x : (arr))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x *(y / gcd(x, y))
#define toint(c) c - 48
#define tochar(c) c + 48

#define MAX 214748364
#define MOD 100000007
#define bug cout << "*_*\n"
using namespace std;

template <class T>
void print(vector<T> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}

int n, m, u, v;
int arr[101];
vector<int> vec[101];
int sum = 0, last;
void dfs(int s)
{
    int mx = -1;
    int ans = -1;
    if (vec[s].size() == 0)
    {
        last = s;
        return;
    }
    for (int i = 0; i < vec[s].size(); i++)
    {
        int x = arr[vec[s][i]];
        if (x > mx)
        {
            mx = x;
            ans = vec[s][i];
        }
    }
    sum += mx;
    // cout << ans << endl;
    dfs(ans);
}
void solve()
{
    int t;
    cin >> t;
    cin.ignore();
    for (int cs = 1; cs <= t; cs++)
    {
        cin >> n >> m;

        for (int i = 0; i < n; i++)
            vec[i].clear();
        sum = 0;
        last = 0;
        
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        while (m--)
        {
            cin >> u >> v;
            vec[u].pb(v);
        }

        dfs(0);
        cout << "Case " << cs << ": " << sum << " " << last << endl;
    }
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.o", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}