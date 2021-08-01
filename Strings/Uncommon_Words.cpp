#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    string temp = "";
    unordered_map<string, int> map1;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == ' ')
        {
            map1[temp]++;
            temp = "";
        }
        else
        {
            temp = temp + s1[i];
        }
    }
    if (temp != "")
    {
        map1[temp]++;
        temp = "";
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == ' ')
        {
            map1[temp]++;
            temp = "";
        }
        else
        {
            temp = temp + s2[i];
        }
    }
    if (temp != "")
    {
        map1[temp]++;
        temp = "";
    }

    for (auto it : map1)
    {
        if (it.second == 1)
        {
            cout << it.first << " ";
        }
    }
    cout << endl;
    return 0;
}