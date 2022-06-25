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
#define pii pair<int, int>
#define X first
#define Y second

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

//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};,
//ll dx[]={1,1,1,0,0,-1,-1,-1};
//ll dy[]={1,0,-1,1,-1,1,0,-1};
bool is_prime(ll n)
{
    if (n <= 1)
        return 0;
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}
template <class T>
void print(vector<T> v)
{
    fore(v) cout << x << ' ';
    cout << endl;
}

void solve()
{
    string s;
    getline(cin, s);
    stack<char> a;
    int f = 1;
    if (s.empty())
    {
        Yes;
        return;
    }
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == '(')
            a.push('(');
        if (s[i] == '[')
            a.push('[');

        if (s[i] == ')')
        {
            if (a.empty())
            {
                No;
                return;
            }
            char ch = a.top();
            if (ch != '(')
            {
                No;
                return;
            }
            a.pop();
        }
        if (s[i] == ']')
        {
            if (a.empty())
            {
                No;
                return;
            }
            char ch = a.top();
            if (ch != '[')
            {
                No;
                return;
            }
            a.pop();
        }
    }
    if (!a.empty())
        No;
    else
        Yes;
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
    cin.ignore();
    while (t--)
    {
        solve();
    }
}