#include <bits/stdc++.h>
using namespace std;

bool kthSetBit(int a, int k)
{
    if (a == 0 || k < 0)
    {
        return false;
    }

    int mask = 1 << (k - 1);

    if ((mask & a) == 0)
    {
        return false;
    }
    return true;
}

int main()
{
    int a, k;
    cin >> a >> k;

    if (kthSetBit(a, k))
    {
        cout << "Kth Bit is Set" << endl;
    }
    else
    {
        cout << "Kth Bit is Not Set" << endl;
    }

    return 0;
}
