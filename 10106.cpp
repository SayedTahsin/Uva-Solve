#include <bits/stdc++.h>
using namespace std;
int toint(char c)
{
    return (c - 48);
}
char tochar(int c)
{
    return (c + 48);
}
string multiply(string s1, string s2)
{
    int n = s1.length();
    int m = s2.length();
    string ans(n + m, '0');
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 0; j--)
        {
            int idx = i + j + 1;
            int x = toint(s1[i]) * toint(s2[j]) + toint(ans[idx]);
            ans[idx] = tochar(x % 10);
            idx--;
            ans[idx] += x / 10;
        }
    }
    for (int i = 0; i < m + n; i++)
    {
        if (ans[i] != '0')
            return ans.substr(i);
    }
    return "0";
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:/code/C++/OJ/in.txt", "r", stdin);
    freopen("D:/code/C++/OJ/out.txt", "w", stdout);
#endif
    string a, b;
    while (cin >> a >> b)
    {
        multiply(a, b);
    }
}