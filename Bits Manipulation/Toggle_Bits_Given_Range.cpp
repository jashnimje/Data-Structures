#include <bits/stdc++.h>
using namespace std;

int toggleBits(int a, int l, int r)
{
    if (r < l)
    {
        return -1;
    }

    int mask = 1 << l;
    while (l <= r)
    {
        if ((mask & a) == 0)
        {
            a = mask | a;
        }
        mask = mask << 1;
        l++;
    }
    return a;
}

int main()
{
    int a;
    cin >> a;
    int l, r;
    cin >> l >> r;
    int tog = toggleBits(a, l, r);
    if (tog != -1)
    {
        cout << "After Toggling: " << tog << endl;
    }
    else
    {
        cout << "Error all Bits are not toggled" << endl;
    }

    return 0;
}
