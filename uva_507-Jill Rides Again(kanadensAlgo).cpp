//*Bismillahir Rahmanir Raheem
//!BlackBeard
#include <bits/stdc++.h>
#define NFS                      \
    ios::sync_with_stdio(false); \
    cin.tie(0)
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update>

#define YES cout << "YES" << endl
#define Yes cout << "Yes" << endl
#define yes cout << "yes" << endl
#define No cout << "No" << endl
#define NO cout << "NO" << endl
#define no cout << "no" << endl

#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#define pb push_back
#define ff first
#define ss second

#define PQiimn priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>
#define PQllmn priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>>
#define PQiimx priority_queue<pair<int, int>>
#define PQllmx priority_queue<pair<ll, ll>>
#define PQ priority_queue<int>

#define FILL(x, y) memset(x, y, sizeof(x))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fore(arr) for (auto &x : (arr))
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x *(y / gcd(x, y))
#define preci(x) fixed << setprecision(x)
#define PI (acos(-1.0))
#define SZ(x) (int)x.size()
#define EPS (1e-9)
#define MAX 214748364
#define MOD 1000000007

#define bug cout << "*_*\n"

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
int dxk[] = {-2, -2, -1, -1, 1, 2, 2, 1};
int dyk[] = {1, -1, 2, -2, 2, 1, -1, -2};
int dx1[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy1[] = {1, 1, 0, -1, -1, -1, 0, 1};

bool equalTo(double a, double b) { return ((fabs(a - b) <= EPS) ? true : false); }
bool notEqual(double a, double b) { return ((fabs(a - b) > EPS) ? true : false); }
bool lessThan(double a, double b) { return ((a + EPS < b) ? true : false); }
bool lessThanEqual(double a, double b) { return ((a < b + EPS) ? true : false); }
bool greaterThan(double a, double b) { return ((a > b + EPS) ? true : false); }
bool greaterThanEqual(double a, double b) { return ((a + EPS > b) ? true : false); }
bool negzero(double a) { return (a < EPS) ? true : false; }

int cs = 1;
template <class T>
inline void print(vector<T> v) { fore(v) cout << x << ' '; }
// inline ll Pow(ll c, int d) { return d == 0 ? 1 : c * pow(c, d - 1); }
inline ll ciel(double a, double b) { return (a + (b - 1)) / b; }
inline void CASE() { cout << "Case " << cs++ << ": "; }
inline int numOfDigit(ll n) { return log10(n) + 1; }
inline int bitsInBinary(ll n) { return log2(n) + 1; }

ll Pow(ll a, ll b)
{
    ll ans = 1;
    for (int i = 1; i <= b; i++)
        ans *= a;
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    int mx = 0, ans = INT_MIN;
    int a = 1, b;
    map<pair<int, pair<int, int>>, pii> mp;
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
        mx += v[i];
        if (mx < v[i])
        {
            mx = v[i];
            a = i;
        }
        if (mx >= ans)
        {
            ans = mx;
            b = i + 1;
            mp[{-ans, {-(b - a), a}}] = {a, b};
        }
    }
    auto it = mp.begin();
    if (ans > 0)
        cout << "The nicest part of route " << cs++ << " is between stops " << it->second.first << " and " << it->second.second << endl;
    else
        cout << "Route " << cs++ << " has no nice parts\n";
}
int main()
{
    NFS;
#ifndef ONLINE_JUDGE
    freopen("D:/Entertainment/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/Entertainment/code/C++/OJ/out.o", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}