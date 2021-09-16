#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (i = 0; i < n; i++)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

//=======================

void checkIfValid(string str)
{
    stack<char> s;
    int temp = 0, depth = 0, pos = -1, maxPos = -1, maxSeq = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '(')
        {
            s.push(ch);
            temp++;
            if (s.size() > depth)
            {
                depth = s.size();
                pos = i + 1;
            }
        }
        else
        {
            s.pop();
            if (s.empty())
            {
                temp++;
                if (temp > maxSeq)
                {
                    maxSeq = temp;
                    maxPos = i - maxSeq + 2;
                }
                temp = 0;
            }
            else
            {
                temp++;
            }
        }
    }
    cout << depth << " " << pos << " " << maxSeq << " " << maxPos << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int val, n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (val == 1)
        {
            str += '(';
        }
        else
        {
            str += ')';
        }
    }
    checkIfValid(str);
    return 0;
}