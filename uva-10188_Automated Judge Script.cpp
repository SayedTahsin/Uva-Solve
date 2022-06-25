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
int n, k;
vector<int> v;
int f(int i)
{
}

void solve()
{
    int n, m;
    string s, k;
    int cs = 0;
    while (cin >> n)
    {

        cin.ignore();
        if (!n)
            break;
        string s1 = "", s2 = "";
        string k = "", k1 = "";
        for (int i = 0; i < n; i++)
        {
            getline(cin, s);
            s1 += s;
            s1 += ' ';
            for (int i = 0; s[i]; i++)
            {
                if (s[i] >= '0' && s[i] <= '9')
                    k += s[i];
            }
        }
        cin >> m;
        cin.ignore();
        for (int i = 0; i < m; i++)
        {
            getline(cin, s);
            s2 += s;
            s2 += ' ';
            for (int i = 0; s[i]; i++)
            {
                if (s[i] >= '0' && s[i] <= '9')
                    k1 += s[i];
            }
        }
        cout << "Run #" << ++cs << ": ";
        if (s1 == s2 && n == m)
            cout << "Accepted\n";
        else if (k == k1)
            cout << "Presentation Error\n";
        else
            cout << "Wrong Answer\n";
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
