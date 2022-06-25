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
    string a, b;
    while (cin >> a >> b)
    {
        string ans = "", output = "0";
        for (int i = b.length() - 1, q = 0; i >= 0; i--, q++)
        {
            int x = b[i] - 48;
            int carry = 0;
            for (int j = a.length() - 1; j >= 0; j--)
            {
                int y = a[j] - 48;
                int z = (x * y) + carry;
                int m = z % 10;
                carry = z / 10;
                ans += (char)(m + 48);
            }
            reverse(ans.begin(), ans.end());
            for (int f = 0; f < q; f++)
                ans += '0';
            int c = 0;
            string temp = "";
            for (int f = ans.length() - 1, f1 = output.length() - 1; f >= 0; f--, f1--)
            {
                int x = ans[f] - 48;
                int y;
                if (f1 < 0)
                    y = 0;
                else
                    y = output[f1] - 48;
                int z = (x + y) + c;
                int m = z % 10;
                c = z / 10;
                temp += (char)(m + 48);
            }
            reverse(temp.begin(), temp.end());
            output.clear();
            output += temp;
            ans.clear();
        }
        if (count(output.begin(), output.end(), '0') == output.length())
            cout << 0 << endl;
        else
        {
            int flag = 1;
            for (int i = 0; output[i]; i++)
            {
                if (output[i] == 0 && flag)
                {
                    continue;
                }
                else
                {
                    flag = 0;
                    cout << output[i];
                }
            }
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