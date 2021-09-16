#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (i = 0; i < n; i++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

//=======================

bool checkIfValid(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '[' || ch == '{')
        {
            s.push(ch);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }
            char p = s.top();
            if (ch == '(' && p != ')')
            {
                return false;
            }
            else if (ch == '[' && p != ']')
            {
                return false;
            }
            else if (ch == '{' && p != '}')
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return s.empty();
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        bool ans = checkIfValid(str);
        if (ans)
        {
            cout << "Valid" << endl;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }

    return 0;
}