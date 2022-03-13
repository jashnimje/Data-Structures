#include <bits/stdc++.h>
using namespace std;

void reverse(vector<char> &s, int ptr1, int ptr2)
{
    if (ptr1 >= ptr2)
    {
        return;
    }
    char temp = s[ptr2];
    s[ptr2] = s[ptr1];
    s[ptr1] = temp;
    reverse(s, ptr1 + 1, ptr2 - 1);
}

int main()
{
    int n;
    cin >> n;
    vector<char> s;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        s.push_back(ch);
    }
    reverse(s, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << " ";
    }
    return 0;
}