#include <bits/stdc++.h>
using namespace std;

int majorityBits(vector<int> v, int n, int maxi)
{
    int mask = 1;
    int ans = 0;
    int j = 0;
    while (j <= maxi)
    {
        int maxBit = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if ((mask & v[i]) == mask)
            {
                count++;
            }
        }
        if (count > (n / 2))
        {
            ans += pow(2, j);
        }
        mask <<= 1;
        j++;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans == v[i])
        {
            count++;
        }
    }
    if (count > (n / 2))
    {
        return ans;
    }
    return -1;
}

int main()
{
    int n, maxi = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
        maxi = max(a, maxi);
    }
    int ans = majorityBits(v, n, maxi);
    if (ans != -1)
    {
        cout << "Majority Element is: " << ans << endl;
    }
    else
    {
        cout << "No Majority Element" << endl;
    }
    return 0;
}